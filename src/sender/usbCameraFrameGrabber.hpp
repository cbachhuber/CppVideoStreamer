struct CameraParameters {
	int sensor_width;
	int sensor_height;
	int width;
	int height;
	int xoff;
	int yoff;
	float fps;
	int t_exp;
	char * eye;
	float color_coeffs [3];
};


void cameraFrameGrabber(CameraParameters * params, unsigned char * img, bool *readyRead, bool *prog_end);
