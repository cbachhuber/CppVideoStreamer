cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)

find_package(SDL2 REQUIRED)

add_library(decoder Decoder.cpp)

target_include_directories(decoder 
    PUBLIC .
)

target_link_libraries(decoder
    PUBLIC x264 swscale avformat avcodec avutil pthread
)

add_executable(video_player VideoPlayer.cpp)

target_link_libraries(video_player
    PUBLIC decoder ${SDL2_LIBRARIES}
)
