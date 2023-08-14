#ifndef DECODER_H_
#define DECODER_H_

// System includes
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>

// FFMPEG includes
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/opt.h>
#include <libswscale/swscale.h>
}

#define ARTIFICIAL_DELAY
#ifdef ARTIFICIAL_DELAY
extern unsigned int listlength;
#endif

extern const char* video_url;
extern const int video_port;
extern const char* ptu_url;
extern const int to_ptu_port;
extern const int from_ptu_port;

extern uint8_t** argb_src;
extern bool newImage;
extern bool readyToQuit;
extern int height, width;
extern const int targetWidth, targetHeight, stereoheight;
extern char* messageFromPTU;

void Decoder(const char* video_address,
             uint8_t** argb_raw,
             bool* newImg);  // This is the decoder thread running in parallel to the main thread

int decode(AVCodecContext* avctx, AVFrame* frame, int* got_frame, AVPacket* pkt);

#endif /* DECODER_H_ */
