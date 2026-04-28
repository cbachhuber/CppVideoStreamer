#include "decoder.h"

#include <cerrno>
#include <cstdlib>
#include <list>

// Socket includes
#include <iomanip>

#include <arpa/inet.h>
#include <fcntl.h>  //File control definitions
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <termios.h>  //POSIX terminal control definitions
#include <unistd.h>

// #define ARDUINO_MSMT
constexpr int kMsgLength = 30;

void Decoder(const char* videoAddress, uint8_t** argbRaw, bool* /*newImg*/)
{
    //---------------------------------------------------------------------------------------------------
    //----------------------------   Variable initializations
    //--------------------------------------------
    //---------------------------------------------------------------------------------------------------

    // Timekeeping
    std::chrono::time_point<std::chrono::high_resolution_clock> overallStart;
    std::chrono::time_point<std::chrono::high_resolution_clock> ccEnd;
    std::chrono::time_point<std::chrono::high_resolution_clock> timekeeper;
    std::chrono::time_point<std::chrono::high_resolution_clock> decodingStart;
    std::chrono::time_point<std::chrono::high_resolution_clock> decodingEnd;

    // Color conversion
    SwsContext* swsCtxYuv2Bgra = nullptr;
    int* argbStride = nullptr;
    int framecounter = 0;
#ifdef ARTIFICIAL_DELAY
    std::list<AVPacket> pktlist;
#endif
    //---------------------------------------------------------------------------------------------------
    //----------------------------   Arduino initialization --------------------------------------------
    //---------------------------------------------------------------------------------------------------

#ifdef ARDUINO_MSMT
    // Arduino setup
    const char* ard_port = "/dev/ttyACM0";
    char buf[kMsgLength] = {0};
    int ard;
    ard = open(ard_port, O_RDWR | O_NOCTTY);

    if (ard == -1)
    {
        std::cout << "Failed to open Arduino! "
                     "Is it connected to "
                  << ard_port << "?\n"
                  << "If yes, do you have rw "
                     "rights on "
                  << ard_port
                  << "? Obtain with '$sudo "
                     "chmod a+rw "
                  << ard_port << "'.\n";
        exit(1);
    }
    else
    {
        struct termios tty;
        memset(&tty, 0, sizeof(tty));

        /* Error Handling */
        if (tcgetattr(ard, &tty) != 0)
        {
            std::cout << "Error " << errno << " from tcgetattr: " << strerror(errno) << "\n";
            exit(1);
        }

        /* Set Baud Rate */
        cfsetospeed(&tty, (speed_t)B115200);
        cfsetispeed(&tty, (speed_t)B115200);

        /* Setting other Port Stuff */
        tty.c_cflag &= ~PARENB;  // Make 8n1
        tty.c_cflag &= ~CSTOPB;
        tty.c_cflag &= ~CSIZE;
        tty.c_cflag |= CS8;

        tty.c_cflag &= ~CRTSCTS;        // no flow control
        tty.c_cc[VMIN] = 0;             // read doesn't block
        tty.c_cc[VTIME] = 0;            // 0.5 seconds read timeout
        tty.c_cflag |= CREAD | CLOCAL;  // turn on READ &
                                        // ignore ctrl
                                        // lines

        /* Make raw */
        cfmakeraw(&tty);

        /* Flush Port, then applies attributes
         */
        tcflush(ard, TCIFLUSH);
        if (tcsetattr(ard, TCSANOW, &tty) != 0)
        {
            std::cout << "Error " << errno << " from tcsetattr"
                      << "\n";
            exit(1);
        }

        int flags = fcntl(ard, F_GETFL, 0);
        fcntl(ard, F_SETFL, flags | O_NONBLOCK);
    }

    int lastval = 255, offset = 25;
    std::cout << "Connected to Arduino \n";
#endif

    //---------------------------------------------------------------------------------------------------
    //----------------------------   Libav initialization
    //----------------------------------------------
    //---------------------------------------------------------------------------------------------------
    // Simple startup without retrieving any stream info
    AVCodecContext* cctx = nullptr;
    const AVCodec* codec = nullptr;
    AVFrame* frame = nullptr;

#if LIBAVFORMAT_VERSION_INT < AV_VERSION_INT(58, 9, 100)
    av_register_all();
#endif

    codec = avcodec_find_decoder(AV_CODEC_ID_H264);
    cctx = avcodec_alloc_context3(codec);

    cctx->width = width;
    cctx->height = height;
    cctx->pix_fmt = AV_PIX_FMT_YUV420P;

    if (avcodec_open2(cctx, codec, nullptr) < 0)
    {
        std::cout << "Could not open decoder!\n";
        readyToQuit = true;
    }

    frame = av_frame_alloc();

    // Complex startup with retrieving stream info
    int frameFinished = 0;
    AVFormatContext* fctx = nullptr;

    fctx = avformat_alloc_context();

    /* open input file, and allocate format context */
    std::cout << "Waiting for input..." << std::endl;
    if (avformat_open_input(&fctx, videoAddress, nullptr, nullptr) < 0)
    {
        fprintf(stderr, "Could not open source file %s\n", videoAddress);
        exit(1);
    }

    //---------------------------------------------------------------------------------------------------
    //----------------------------   CSP conversion initialization
    //-------------------------------------
    //---------------------------------------------------------------------------------------------------
    swsCtxYuv2Bgra = sws_getContext(width,
                                    height,
                                    AV_PIX_FMT_YUV420P,
                                    targetWidth,
                                    targetHeight,
                                    AV_PIX_FMT_RGBA,
                                    SWS_BILINEAR,
                                    nullptr,
                                    nullptr,
                                    nullptr);

    auto* argbData =
        static_cast<uint8_t*>(malloc(static_cast<size_t>(targetWidth) * targetHeight * 4 * sizeof(uint8_t)));
    argbRaw[0] = argbData;
    argbRaw[1] = argbData + static_cast<ptrdiff_t>(targetWidth) * targetHeight;
    argbRaw[2] = argbData + static_cast<ptrdiff_t>(targetWidth) * targetHeight * 2;
    argbRaw[3] = argbData + static_cast<ptrdiff_t>(targetWidth) * targetHeight * 3;
    argbStride = static_cast<int*>(malloc(sizeof(int) * 1));
    argbStride[0] = 4 * targetWidth;

    timekeeper = std::chrono::high_resolution_clock::now();
    overallStart = std::chrono::high_resolution_clock::now();

    //---------------------------------------------------------------------------------------------------
    //-----------------------------------------   Main Loop
    //-------------------------------------------
    //---------------------------------------------------------------------------------------------------

    while (!readyToQuit)
    {
        AVPacket* pkt = av_packet_alloc();
        const int ret = av_read_frame(fctx, pkt);
        // Packets with a size equal to 100
        // bytes are dummy packets.
        // These packets just push the actual
        // packets through av_read_frame. We
        // don't want to
        // process them.
        constexpr int kMinPacketSize = 100;
        if ((ret >= 0) && (pkt->size > kMinPacketSize))
        {

#ifdef ARTIFICIAL_DELAY
            if (listlength > 0)
            {
                // Add to list, remove if list length sufficient
                pktlist.push_back(*pkt);
                if (pktlist.size() == listlength)
                {
                    (*pkt) = pktlist.front();
                }
                else
                {
                    while (pktlist.size() >= listlength)
                    {
                        pktlist.pop_front();
                    }
                    continue;
                }
            }
#endif

            framecounter++;
            decodingStart = std::chrono::high_resolution_clock::now();
            decode(cctx, frame, &frameFinished, pkt);
            decodingEnd = std::chrono::high_resolution_clock::now();
            sws_scale(swsCtxYuv2Bgra, frame->data, frame->linesize, 0, cctx->height, argbRaw, argbStride);
            ccEnd = std::chrono::high_resolution_clock::now();
            newImage = true;

#ifdef ARTIFICIAL_DELAY
            if (!pktlist.empty())
            {
                pktlist.pop_front();
            }
#endif

#ifdef ARDUINO_MSMT
            // Tell Arduino
            int val = (int)argb_raw[0][0];
            if (val > lastval + offset)
            {
                write(ard, "a\n", sizeof(char));
            }
            lastval = val;
#endif

#ifdef ARDUINO_MSMT
            // Reading from Arduino
            int length = read(ard, buf, MSGLENGTH * sizeof(char));
            if (length > 0)
            {
                std::string msg = buf, strbuf;
                strbuf = msg.substr(msg.find(":") + 2, msg.length());
                std::cout << strbuf;
            }
#else
            constexpr int kFps = 60;
            constexpr int kPrintInterval = 5;
            if (framecounter % (kFps / kPrintInterval) == 0)
            {
                std::cout << "\r"
                          << "rb=" << pkt->size << "B, "
                          << "t_dec="
                          << std::chrono::duration_cast<std::chrono::microseconds>(decodingEnd - decodingStart).count()
                          << "us, t_cc="
                          << std::chrono::duration_cast<std::chrono::microseconds>(ccEnd - decodingEnd).count()
                          << std::flush;
            }
#endif
        }

        av_packet_free(&pkt);
    }

    //---------------------------------------------------------------------------------------------------
    //-----------------------------------------   Wrapup ------------------------------------------------
    //---------------------------------------------------------------------------------------------------

#ifdef ARDUINO_MSMT
    // Close Arduino
    close(ard);
#endif

    sws_freeContext(swsCtxYuv2Bgra);
    free(reinterpret_cast<void*>(argbRaw));
    free(argbStride);

    std::cout << "Successfully terminated decoder thread" << std::endl;
}

int decode(AVCodecContext* avctx, AVFrame* frame, int* gotFrame, AVPacket* pkt)
{
    int ret = 0;

    *gotFrame = 0;

    if (pkt != nullptr)
    {
        ret = avcodec_send_packet(avctx, pkt);
        // In particular, we don't expect
        // AVERROR(EAGAIN), because we read all
        // decoded frames with
        // avcodec_receive_frame() until done.
        if (ret < 0)
        {
            return ret == AVERROR_EOF ? 0 : ret;
        }
    }

    ret = avcodec_receive_frame(avctx, frame);
    if (ret < 0 && ret != AVERROR(EAGAIN) && ret != AVERROR_EOF)
    {
        return ret;
    }
    if (ret >= 0)
    {
        *gotFrame = 1;
    }

    return 0;
}
