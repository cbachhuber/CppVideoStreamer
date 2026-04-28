#ifndef ENCODER_HPP_
#define ENCODER_HPP_

#include <cstdint>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavformat/avio.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <x264.h>
}

class Encoder
{
  private:
    int inXres = 0;
    int inYres = 0;
    int outXres = 0;
    int outYres = 0;
    int framecounter = 0;
    int nheader = 0;
    x264_t* enc = nullptr;
    x264_param_t prms {};
    x264_picture_t pic_in {};
    x264_picture_t pic_out {};

    struct SwsContext* sws = nullptr;
    AVFrame picRaw {};
    AVPixelFormat camPixelFmt = AV_PIX_FMT_BGR24;

  public:
    x264_nal_t* nals = nullptr;
    int numNals = 0;
    virtual ~Encoder();
    Encoder() {};
    Encoder(int, int, int, int, float);
    int encode(unsigned char*, bool*);
};

#endif /* ENCODER_HPP_ */
