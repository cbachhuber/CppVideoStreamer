#include "usbCameraFrameGrabber.hpp"

#include <iostream>
#include <stdio.h>
#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

void cameraFrameGrabber(CameraParameters * params, unsigned char * img, bool *imgReady, bool *prog_end){
  
	// Retrieving a handle to the camera device
	printf("Opening first camera...\n");
	cv::VideoCapture cap(0);  // To open another camera recognized by opencv, increment the argument
	if(!cap.isOpened()){
		std::cout << "Could not open camera!\n";
		*prog_end = true;
	}

	// Set camera parameters
	cap.set(cv::CAP_PROP_FOURCC, cv::VideoWriter::fourcc('M','J','P','G'));
	cap.set(cv::CAP_PROP_FRAME_WIDTH, params->width);
	cap.set(cv::CAP_PROP_FRAME_HEIGHT, params->height);
	cap.set(cv::CAP_PROP_FPS, params->fps);  // This can control fps. But only up to limit given by cam.
	cap.set(cv::CAP_PROP_AUTO_EXPOSURE, 0.25);  // This value gives manual exposure control
	cap.set(cv::CAP_PROP_EXPOSURE, 0.0835);  
	// An exposure value of 0.0835 seems to enable the highest frame rate on a Logitech C922.
	// Might differ for your camera. In general, the range for exposure should be [0,1]

	cv::Mat frame;

	// Main loop for acquiring images from the camera
	while(!(*prog_end)){

		//Get image
		cap >> frame; // get a new frame from camera
		
		// Copy to allocated memory from main
		memcpy(img, frame.data,(params->height)*(params->width)*3);

		// Set ReadyRead: encoder can now process image
		*imgReady = true;
	}
	
}
