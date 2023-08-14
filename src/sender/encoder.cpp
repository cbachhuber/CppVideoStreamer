#include "encoder.hpp"

#include <iostream>


Encoder::~Encoder(){
  std::cout << "Encoder shutdown called.\n";
}


// Setup of the encoder instance
Encoder::Encoder(int inW, int inH, int outW, int outH, float fps):
		in_xres(inW),
		in_yres(inH),
		out_xres(outW),
		out_yres(outH) 
	{
	
	framecounter = 0;
	x264_param_default_preset(&prms, "ultrafast", "zerolatency,fastdecode");
	x264_param_apply_profile(&prms, "baseline");
	prms.i_width = out_xres;
	prms.i_height = out_yres;
	prms.i_fps_num = fps;
	prms.i_fps_den = 1;
	prms.rc.i_qp_constant = 20;

	prms.rc.i_rc_method = X264_RC_CRF;
	prms.rc.f_rf_constant = 20;
	prms.rc.f_rf_constant_max = 25;

	prms.i_csp = X264_CSP_I420;
	enc = x264_encoder_open(&prms);
	x264_encoder_headers(enc, &nals, &nheader);

	//Initialize X264 Picture
	x264_picture_alloc(&pic_in, X264_CSP_I420, out_xres, out_yres);

	// Color conversion setup
	sws = sws_getContext(in_xres, in_yres, cam_pixel_fmt, //AV_PIX_FMT_BAYER_GBRG8, AV_PIX_FMT_RGB24
			out_xres, out_yres, AV_PIX_FMT_YUV420P,
			SWS_FAST_BILINEAR, NULL, NULL, NULL);

	if(!sws) {
		std::cout << "Cannot create SWS context" << std::endl;

	}
}

// Puts the raw char data of an image into an AV container, color converts and encodes it
int Encoder::encode(unsigned char * img, bool *imgReady){
  
	// Put raw image data to AV picture
  	int bytes_filled = av_image_fill_arrays(pic_raw.data,pic_raw.linesize, img, cam_pixel_fmt, in_xres, in_yres,1);
	if(!bytes_filled) {
		std::cout << "Cannot fill the raw input buffer" << std::endl;
		return -1;
	}

	// convert to I420 for x264
	int h = sws_scale(sws, pic_raw.data, pic_raw.linesize, 0,
			in_yres, pic_in.img.plane, pic_in.img.i_stride);
	if(h != out_yres) {
		std::cout << "scale failed: %d" << std::endl;;
		return -1;
	}

	// Set imgReady to false here (cameraGrabber thread may now write a new image into it), since the data we process now with is already in another place
	*imgReady = false;

	// Encode
	pic_in.i_pts = framecounter++;
	int frame_size = x264_encoder_encode(enc, &nals, &num_nals, &pic_in, &pic_out);
	
	return frame_size;
}


