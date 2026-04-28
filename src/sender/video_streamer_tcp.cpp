#ifdef BUILD_XIMEA
#include "ximea_camera_frame_grabber.hpp"
#else
#include "usb_camera_frame_grabber.hpp"
#endif

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <chrono>
#include <iomanip>
#include <iostream>
#include <thread>

#include <opencv2/core.hpp>
#include <unistd.h>

#include "encoder.hpp"
#include "tcp_socket.hpp"

// Parses the command line arguments and sets up the camera and encoder objects
// Returns true on success, false on failure
bool parseArguments(int argc, char** argv, TcpSocket* sock, CameraParameters* camParams, Encoder* enc);

int main(int argc, char* argv[])
{
    // Variable initializations
    bool progEnd = false;  // Shared between threads to signal program shutdown
    bool imgReady = false;   // Synchronizes cameraFrameGrabber and encoder
    int framecounter = 0;
    std::chrono::time_point<std::chrono::high_resolution_clock> encStart;
    std::chrono::time_point<std::chrono::high_resolution_clock> encEnd;
    std::chrono::time_point<std::chrono::high_resolution_clock> timekeeper;
    std::chrono::time_point<std::chrono::high_resolution_clock> overallStart;

    // Main objects: camera parameters, encoder and tcp Socket
    CameraParameters camParams {};
    Encoder enc;
    TcpSocket sock;

    if (!parseArguments(argc, argv, &sock, &camParams, &enc))
    {
        return -1;
    }

    // Allocate memory for raw image
    auto* img = static_cast<unsigned char*>(malloc(static_cast<size_t>(camParams.width) * camParams.height * 3));

    if (!sock.listenForLocalConnection())
    {
        return -1;
    }

    // Start camera frame grabber thread
    std::thread camFrameGrabber(cameraFrameGrabber, &camParams, img, &imgReady, &progEnd);

    // Main Loop
    timekeeper = std::chrono::high_resolution_clock::now();
    while (!progEnd)
    {
        // First, wait for imgReady. Gets true once the cameraFrameGrabber has put a new image into the shared memory
        // img
        if (framecounter == 1)
        {
            overallStart = std::chrono::high_resolution_clock::now();  // Start measuring, when we have the first image
        }
        while ((!imgReady) && !progEnd)
        {
            const auto sleepDuration = 10;
            std::this_thread::sleep_for(std::chrono::microseconds(sleepDuration));
        }
        if (progEnd)
        {
            break;
        }

        // Encode
        encStart = std::chrono::high_resolution_clock::now();
        const int frameSize = enc.encode(img, &imgReady);
        encEnd = std::chrono::high_resolution_clock::now();

        // Send using tcpSocket
        int sentbytesFrame = 0;
        for (int i = 0; i < enc.numNals; i++)
        {

            const int sentbytesNal = sock.send(enc.nals[i].p_payload, enc.nals[i].i_payload);

            if (sentbytesNal < 0)
            {
                // Video receiver shut down connection, quit this program
                progEnd = true;
                const auto tcpClosureTimeout = 100;
                std::this_thread::sleep_for(std::chrono::milliseconds(tcpClosureTimeout));
                std::cout << "\n\nClient closed TCP connection. Closing program.\n\n";
                break;
            }

            sentbytesFrame += sentbytesNal;
        }

        timekeeper = std::chrono::high_resolution_clock::now();

        // Put info to terminal
        const auto updateFrequency = 5;
        if ((framecounter % (static_cast<int>(camParams.fps) / updateFrequency)) == 0)
        {
            const auto millisecondsToSeconds = 1000;
            std::cout << "\rt_enc="
                      << std::chrono::duration_cast<std::chrono::microseconds>(encEnd - encStart).count()
                      << "us, fs=" << frameSize << "b, sb=" << sentbytesFrame << "b, fps="
                      << (static_cast<double>(framecounter) * millisecondsToSeconds) /
                             static_cast<double>(std::chrono::duration_cast<std::chrono::milliseconds>(timekeeper - overallStart).count())
                      << "Hz.        " << std::flush;
        }

        framecounter++;
    }

    camFrameGrabber.join();
    return 0;
}

bool parseArguments(int argc, char* argv[], TcpSocket* sock, CameraParameters* camParams, Encoder* enc)
{

    std::stringstream ss;
    cv::FileStorage conf;
    std::string temp;
    const char* defaultPath = "../src/config.yaml";

    ss << "Usage: '" << argv[0] << " [path/to/config.yaml]'\n"
       << "[path/to/config.yaml] path to config file, per default in src/config.yaml.\n"
       << "Example: '" << argv[0] << " ../src/config.yaml'. \n\n";
    const std::string msg = ss.str();

    switch (argc)
    {
        case 1:
            std::cout << "Called without arguments. Defaulting to path " << defaultPath << " for config file.\n"
                      << "Use 'ffplay -probesize 32 -sync ext tcp://127.0.0.1:5001' to view locally (or this "
                         "computer's IP address instead of 127.0.0.1 to view somewhere else).\n"
                      << "Careful, ffplay introduces noticeable lag through buffering\n\n";
            std::cout << msg << std::endl;
            conf = cv::FileStorage(defaultPath, cv::FileStorage::READ);
            break;
        case 2:
            conf = cv::FileStorage(argv[1], cv::FileStorage::READ);
            break;
        default:
            std::cout << msg << std::endl;
            return false;
    }

    // Get values from config file
    *sock = TcpSocket(conf["port"]);
    const auto bytesForEyeName = 99;
    camParams->eye = static_cast<char*>(malloc(bytesForEyeName));

    temp = static_cast<std::string>(conf["camera.name"]);
    temp.copy(camParams->eye, bytesForEyeName);
    camParams->width = 2 * (static_cast<int>(conf["camera.width"])) / 2;
    camParams->height = 4 * (static_cast<int>(conf["camera.height"])) / 4;
    camParams->sensor_width = conf["camera.sensor_width"];
    camParams->sensor_height = conf["camera.sensor_height"];
    camParams->fps = conf["camera.fps"];
    camParams->color_coeffs[0] = conf["camera.r_coeff"];
    camParams->color_coeffs[1] = conf["camera.g_coeff"];
    camParams->color_coeffs[2] = conf["camera.b_coeff"];

    *enc = Encoder(conf["camera.width"], conf["camera.height"], conf["video.width"], conf["video.height"], conf["fps"]);

    // Computing remaining values
    const auto microsecondsToSeconds = 1000000;
    const auto exposureTimeFactor = 1.005;  // Empirically determined factor to get the actual exposure time slightly below the frame time, to avoid dropped frames
    const auto offsetGridSize = 16;
    camParams->t_exp = static_cast<int>(microsecondsToSeconds / (camParams->fps * exposureTimeFactor));
    camParams->xoff = offsetGridSize * ((camParams->sensor_width - camParams->width) / (offsetGridSize * 2));
    camParams->yoff = offsetGridSize * ((camParams->sensor_height - camParams->height) / (offsetGridSize * 2));

    return true;
}
