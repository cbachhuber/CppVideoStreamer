#include "encoder.hpp"

#include <iostream>

Encoder::~Encoder()
{
    std::cout << "Encoder shutdown called.\n";
}

// Setup of the encoder instance
Encoder::Encoder(int inW, int inH, int outW, int outH, float fps)
    : inXres(inW), inYres(inH), outXres(outW), outYres(outH)
{

    x264_param_default_preset(&prms, "ultrafast", "zerolatency,fastdecode");
    x264_param_apply_profile(&prms, "baseline");
    prms.i_width = outXres;
    prms.i_height = outYres;
    prms.i_fps_num = static_cast<uint32_t>(fps);
    prms.i_fps_den = 1;
    prms.rc.i_qp_constant = 20;

    prms.rc.i_rc_method = X264_RC_CRF;
    prms.rc.f_rf_constant = 20;
    prms.rc.f_rf_constant_max = 25;

    prms.i_csp = X264_CSP_I420;
    enc = x264_encoder_open(&prms);
    x264_encoder_headers(enc, &nals, &nheader);

    // Initialize X264 Picture
    x264_picture_alloc(&pic_in, X264_CSP_I420, outXres, outYres);

    // Color conversion setup
    sws = sws_getContext(inXres,
                         inYres,
                         camPixelFmt,  // AV_PIX_FMT_BAYER_GBRG8, AV_PIX_FMT_RGB24
                         outXres,
                         outYres,
                         AV_PIX_FMT_YUV420P,
                         SWS_FAST_BILINEAR,
                         nullptr,
                         nullptr,
                         nullptr);

    if (!sws)
    {
        std::cout << "Cannot create SWS context" << std::endl;
    }
}

// Puts the raw char data of an image into an AV container, color converts and encodes it
int Encoder::encode(unsigned char* img, bool* imgReady)
{

    // Put raw image data to AV picture
    const int bytesFilled = av_image_fill_arrays(picRaw.data, picRaw.linesize, img, camPixelFmt, inXres, inYres, 1);
    if (!bytesFilled)
    {
        std::cout << "Cannot fill the raw input buffer" << std::endl;
        return -1;
    }

    // convert to I420 for x264
    const int h = sws_scale(sws, picRaw.data, picRaw.linesize, 0, inYres, pic_in.img.plane, pic_in.img.i_stride);
    if (h != outYres)
    {
        std::cout << "scale failed: %d" << std::endl;
        return -1;
    }

    // Set imgReady to false here (cameraGrabber thread may now write a new image into it), since the data we process
    // now with is already in another place
    *imgReady = false;

    // Encode
    pic_in.i_pts = framecounter++;
    const int frameSize = x264_encoder_encode(enc, &nals, &numNals, &pic_in, &pic_out);

    return frameSize;
}
