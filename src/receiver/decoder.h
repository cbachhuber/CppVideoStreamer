#ifndef DECODER_H_
#define DECODER_H_

// System includes
#include <cstdio>
#include <cstdlib>

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

extern const char* videoUrl;
extern const int videoPort;
extern const char* ptuUrl;
extern const int toPtuPort;
extern const int fromPtuPort;

extern uint8_t** argbSrc;
extern bool newImage;
extern bool readyToQuit;
extern int height, width;
extern const int targetWidth, targetHeight, stereoheight;
extern char* messageFromPTU;

void Decoder(const char* videoAddress,
             uint8_t** argbRaw,
             bool* newImg);  // This is the decoder thread running in parallel to the main thread

int decode(AVCodecContext* avctx, AVFrame* frame, int* gotFrame, AVPacket* pkt);

#endif /* DECODER_H_ */
