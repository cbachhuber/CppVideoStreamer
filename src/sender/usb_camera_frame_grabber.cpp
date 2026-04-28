#include "usb_camera_frame_grabber.hpp"

#include <cstdio>
#include <cstring>

#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>

void cameraFrameGrabber(CameraParameters* params, unsigned char* img, bool* imgReady, bool* progEnd)
{

    // Retrieving a handle to the camera device
    printf("Opening first camera...\n");
    cv::VideoCapture cap(0);  // To open another camera recognized by opencv, increment the argument
    if (!cap.isOpened())
    {
        std::cout << "Could not open camera!\n";
        *progEnd = true;
    }

    // Set camera parameters
    cap.set(cv::CAP_PROP_FOURCC, cv::VideoWriter::fourcc('M', 'J', 'P', 'G'));
    cap.set(cv::CAP_PROP_FRAME_WIDTH, params->width);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, params->height);
    cap.set(cv::CAP_PROP_FPS, params->fps);     // This can control fps. But only up to limit given by cam.
    const auto autoExposure = 0.25;  // This value gives manual exposure control for many cameras, but might differ for your camera
    cap.set(cv::CAP_PROP_AUTO_EXPOSURE, autoExposure);
    // An exposure value of 0.0835 seems to enable the highest frame rate on a Logitech C922.
    // Might differ for your camera. In general, the range for exposure should be [0,1]
    const auto exposureValue = 0.0835;
    cap.set(cv::CAP_PROP_EXPOSURE, exposureValue);

    cv::Mat frame;

    // Main loop for acquiring images from the camera
    while (!(*progEnd))
    {

        // Get image
        cap >> frame;  // get a new frame from camera

        // Copy to allocated memory from main
        memcpy(img, frame.data, static_cast<size_t>(params->height) * params->width * 3);

        // Set ReadyRead: encoder can now process image
        *imgReady = true;
    }
}
