
#ifndef ENCODER_HPP_
#define ENCODER_HPP_

#include <stdint.h>

extern "C" {
#include <x264.h>
#include <libswscale/swscale.h>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavformat/avio.h>
#include <libavutil/imgutils.h>
}


class Encoder {
private:
	int in_xres, in_yres, out_xres, out_yres;
	int framecounter;
	int nheader;
	x264_t* enc;
	x264_param_t prms;
	x264_picture_t pic_in, pic_out;

	struct SwsContext* sws;
	AVFrame pic_raw;     /* used for our "raw" input container */
	AVPixelFormat cam_pixel_fmt = AV_PIX_FMT_BGR24;


public:
	x264_nal_t* nals;
	int num_nals;
	virtual ~Encoder();
	Encoder(){};
	Encoder(int, int, int, int, float);
	int encode(unsigned char *, bool*);
};

#endif /* ENCODER_HPP_ */
