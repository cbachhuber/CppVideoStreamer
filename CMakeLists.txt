cmake_minimum_required(VERSION 3.1)

project(VideoStreamer C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall  -O3 -march=native")

option(ENABLE_CLANG_TIDY "Run clang-tidy during compilation" OFF)
if(ENABLE_CLANG_TIDY)
  find_program(CLANG_TIDY_EXE NAMES clang-tidy REQUIRED)
  set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")
  message(STATUS "clang-tidy enabled: ${CLANG_TIDY_EXE}")
endif()

add_subdirectory(src)
