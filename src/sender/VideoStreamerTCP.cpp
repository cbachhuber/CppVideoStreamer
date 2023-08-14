#ifdef BUILD_XIMEA
#include "ximeaCameraFrameGrabber.hpp"
#else
#include "usbCameraFrameGrabber.hpp"
#endif

#include "encoder.hpp"
#include "tcpSocket.hpp"

#include <opencv2/core.hpp>

#include <chrono>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <thread>

// Parses the command line arguments and sets up the camera and encoder objects
// Returns 1 on success, 0 on failure
int argumentParser(int, char**, TcpSocket*, CameraParameters*, Encoder*);


int main(int argc, char* argv[])
{
	// Variable initializations
	bool prog_end = false,  // Shared between threads to signal program shutdown
	     imgReady = false;  // Synchronizes cameraFrameGrabber and encoder
	int framecounter = 0;
	std::chrono::time_point<std::chrono::high_resolution_clock> enc_start, enc_end, timekeeper, overall_start;

	// Main objects: camera parameters, encoder and tcp Socket
	CameraParameters cam_params;
	Encoder enc;
	TcpSocket sock;

	// Parse command line arguments
	if(!argumentParser(argc, argv, &sock, &cam_params, &enc)) return -1;
	
	// Allocate memory for raw image
	unsigned char * img = (unsigned char *) malloc(cam_params.width * cam_params.height * 3);

	// Listen for connection request
	if(!sock.listenForLocalConnection()){
		return -1;
	}

	// Start camera frame grabber thread
	std::thread camFrameGrabber(cameraFrameGrabber, &cam_params, img, &imgReady, &prog_end);

	// Main Loop
	timekeeper = std::chrono::high_resolution_clock::now();
	while (!prog_end)
	{
		//First, wait for imgReady. Gets true once the cameraFrameGrabber has put a new image into the shared memory img
		if(framecounter == 1) overall_start = std::chrono::high_resolution_clock::now(); //Start measuring, when we have the first image
		while((!imgReady) && !prog_end) std::this_thread::sleep_for(std::chrono::microseconds(10));
		if(prog_end) break;

		// Encode
		enc_start= std::chrono::high_resolution_clock::now();
		int frame_size =  enc.encode(img, &imgReady);
		enc_end= std::chrono::high_resolution_clock::now();

		// Send using tcpSocket 
		int sentbytes_frame = 0;
		for(int i=0;i<enc.num_nals;i++){

			int sentbytes_nal = sock.send(enc.nals[i].p_payload, enc.nals[i].i_payload);

			if(sentbytes_nal < 0) {
				// Video receiver shut down connection, quit this program
				prog_end = true;
				std::this_thread::sleep_for(std::chrono::milliseconds(100));
				std::cout << "\n\nClient closed TCP connection. Closing program.\n\n";
				break;
			}

			sentbytes_frame += sentbytes_nal;
		}

		timekeeper = std::chrono::high_resolution_clock::now();

		// Put info to terminal
		if((framecounter%((int)(cam_params.fps)/5)) == 0){
			std::cout << "\rt_enc=" << std::chrono::duration_cast<std::chrono::microseconds>(enc_end - enc_start).count()
			 << "us, fs=" << frame_size
			 << "b, sb=" << sentbytes_frame
			 << "b, fps=" << (double)(framecounter*1000)/(std::chrono::duration_cast<std::chrono::milliseconds>(timekeeper - overall_start).count()) << "Hz.        " << std::flush;
		}

		framecounter ++;
	}

	camFrameGrabber.join();
	return 0;
}


int argumentParser(int argc, char * argv[], TcpSocket* sock, CameraParameters* cam_params, Encoder* enc){
  
	std::stringstream ss;
	cv::FileStorage conf;
	std::string temp;
	char * default_path = (char *) "../src/config.yaml";

	ss << "Usage: '" << argv[0] << " [path/to/config.yaml]'\n" <<
			"[path/to/config.yaml] path to config file, per default in src/config.yaml.\n" <<
			"Example: '" << argv[0] << " ../src/config.yaml'. \n\n";
	std::string msg = ss.str();

	switch(argc){
	case 1:
		std::cout << "Called without arguments. Defaulting to path " << default_path << " for config file.\n"
				<< "Use 'ffplay -probesize 32 -sync ext tcp://127.0.0.1:5001' to view locally (or this computer's IP address instead of 127.0.0.1 to view somewhere else).\n"
				<< "Careful, ffplay introduces noticeable lag through buffering\n\n";
		std::cout << msg << std::endl;
		conf = cv::FileStorage(default_path, cv::FileStorage::READ);
		break;
	case 2:
		conf = cv::FileStorage(argv[1], cv::FileStorage::READ);
		break;
	default:
		std::cout << msg << std::endl;
		return 0;
	}
	
	// Get values from config file
	*sock = TcpSocket(conf["port"]);
	cam_params->eye = (char *) malloc(99);

	temp = (std::string) conf["camera.name"];
	temp.copy(cam_params->eye, 99);
	cam_params->width = 2*((int)conf["camera.width"])/2;
	cam_params->height = 4*((int)conf["camera.height"])/4;
	cam_params->sensor_width = conf["camera.sensor_width"];
	cam_params->sensor_height = conf["camera.sensor_height"];
	cam_params->fps = conf["camera.fps"];
	cam_params->color_coeffs[0] = conf["camera.r_coeff"];
	cam_params->color_coeffs[1] = conf["camera.g_coeff"];
	cam_params->color_coeffs[2] = conf["camera.b_coeff"];

	*enc = Encoder(conf["camera.width"], conf["camera.height"],
		       conf["video.width"],conf["video.height"],
		       conf["fps"]);

	// Computing remaining values
	cam_params->t_exp = (int)(1000000/(cam_params->fps*1.005));
	cam_params->xoff = 16*((cam_params->sensor_width - cam_params->width)/(16*2));
	cam_params->yoff = 16*((cam_params->sensor_height - cam_params->height)/(16*2));
	
	return 1;
}
