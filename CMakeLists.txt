cmake_minimum_required(VERSION 2.4.6)

option(BUILD_XIMEA "Build the ximea streaming application. Requires the Ximea SDK." OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall  -O3 -march=native")

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX17)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX17)
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
   add_definitions(-DCOMPILEDWITHC11)
   message(STATUS "Using flag -std=c++11.")
else()
   message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# Build instructions for USB cam application
set(LIBS
    opencv_core opencv_highgui opencv_imgproc opencv_videoio  # OpenCV related libs
    x264 swscale avformat avcodec avutil swresample  # x264 and ffmpeg libs
    dl m z pthread va  # libs required for ffmpeg
)
add_executable(usbCamStreamer
    src/VideoStreamerTCP.cpp
    src/usbCameraFrameGrabber.cpp
    src/encoder.cpp
    src/tcpSocket.cpp
)
target_link_libraries(usbCamStreamer ${LIBS})

if(BUILD_XIMEA_EXAMPLE)
  set(LIBS ${LIBS} m3api)  # Ximea API
  add_executable(ximeaStreamer
    src/VideoStreamerTCP.cpp
    src/xiApiPlusOcv.cpp
    src/ximeaCameraFrameGrabber.cpp
    src/encoder.cpp
    src/tcpSocket.cpp
  )
  target_link_libraries(ximeaStreamer ${LIBS})
endif(BUILD_XIMEA_EXAMPLE)