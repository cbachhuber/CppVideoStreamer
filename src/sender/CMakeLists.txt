cmake_minimum_required(VERSION 3.1)

option(BUILD_XIMEA
       "Build the ximea streaming application. Requires the Ximea SDK." OFF)

# Build instructions for USB cam application
find_package(OpenCV 4.0.0 REQUIRED)
set(LIBS
    opencv_core
    opencv_highgui
    opencv_imgproc
    opencv_videoio # OpenCV related libs
    x264
    swscale
    avformat
    avcodec
    avutil
    swresample # x264 and ffmpeg libs
    dl
    m
    z
    pthread
    va # libs required for ffmpeg
)
add_executable(
  usbCamStreamer video_streamer_tcp.cpp usb_camera_frame_grabber.cpp
                 encoder.cpp tcp_socket.cpp)
target_link_libraries(usbCamStreamer PRIVATE ${LIBS})

if(BUILD_XIMEA)
  set(LIBS ${LIBS} m3api) # Ximea API
  add_executable(
    ximeaStreamer video_streamer_tcp.cpp xi_api_plus_ocv.cpp
                  ximea_camera_frame_grabber.cpp encoder.cpp tcp_socket.cpp)
  target_link_libraries(ximeaStreamer ${LIBS})
endif(BUILD_XIMEA)
