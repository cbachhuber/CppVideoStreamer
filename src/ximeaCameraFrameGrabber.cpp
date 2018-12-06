#include "ximeaCameraFrameGrabber.hpp"

void cameraFrameGrabber(CameraParameters * params, unsigned char * img, bool *imgReady, bool *prog_end){
  
	// Camera setup
	xiAPIplusCameraOcv cam;
	cam.OpenByUserID(params->eye);

	try{
		cam.SetImageDataFormat(XI_RGB24);
		cam.SetWhiteBalanceRed(params->color_coeffs[0]);
		cam.SetWhiteBalanceGreen(params->color_coeffs[1]);
		cam.SetWhiteBalanceBlue(params->color_coeffs[2]);
		cam.DisableAutoExposureAutoGain();
		cam.SetExposureTime(params->t_exp);  // in microseconds
		cam.SetOffsetX(0); //To avoid that offset x + width > sensor width because of an old config
		cam.SetOffsetY(0); //To avoid that offset y + height > sensor height because of an old config
		cam.SetWidth(params->width);
		cam.SetHeight(params->height);
		cam.SetOffsetX(params->xoff);
		cam.SetOffsetY(params->yoff);
	}catch(xiAPIplus_Exception& exp)
	{
		std::cout << "\n\nError setting up camera:\n";
		exp.PrintError();
		*prog_end = true;
		std::cout << "Is the sensor size (camera.sensor_width and camera.sensor_height) in your config file correct?\n\n";
	}
	
	std::cout << "Starting Acquisition of camera " << params->eye << std::endl;
	cam.StartAcquisition();

	// Main loop for acquiring images from the camera
	while(!(*prog_end)){

		// Get image. This function waits for the next image from the camera.
		// Consequently, it dictates this loop's frequency, which dictates encoding frequency
		cv::Mat imgl = cam.GetNextImageOcvMat();

		// Copy to allocated memory from main
		memcpy(img, imgl.data,(params->height)*(params->width)*3);
		
		// Set imgReady: encoder can now process image
		*imgReady = true;
	}
	
	cam.StopAcquisition();
	cam.Close();
}
