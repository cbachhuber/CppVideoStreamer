# C++ USB camera video streamer

You want to stream low latency h.264-video from a USB camera? Use this code! Thanks to its modular structure, the camera frame grabber can be easily replaced by code for other cameras such as Ximea industrial cameras, as shown in the second example. Video parameters such as resolution and frame rate can be set in the [config file](config.yaml).

This project is intended to kickstart C++ projects that require low latency video streaming and to provide a sample implementation of the x264 video encoder in C++.

## Software Prerequisites

This code has been tested on Ubuntu 16.04 LTS. The project relies on the multi-platform libraries OpenCV, ffmpeg, and x264. Thus, the following Ubuntu-specific instructions are similar on other platforms such as OS X or Windows. The following software is required for both code samples.

- Install CMake, build-essential, FFmpeg, x264, and OpenCV: `sudo apt install -y build-essential cmake ffmpeg x264 libopencv-dev`

For compiling the Ximea sample (disabled by default), the following additional setup steps need to be performed:
- Install the [Camera driver and SDK](https://www.ximea.com/support/wiki/apis/XIMEA_Linux_Software_Package). Installation is described on the linked webpage. During installation, do not use the -pcie argument.
- After installation, increase the USB buffer size in Linux (add 'echo 0 > /sys/module/usbcore/parameters/usbfs_memory_mb' to /etc/rc.local) and [allow the application to run in realtime](https://www.ximea.com/support/wiki/apis/Linux_USB30_Support#Allow-to-Run-Application-Realtime).

## Building

Clone this repository into a folder of your choice

```
git clone https://github.com/cbachhuber
```

change into the cloned directory (`cd Streamer`), create a build folder, and change into it (`mkdir build && cd build`). Within the build folder, execute

```
cmake ..
```

to configure the project. Now, still in the build-folder, you can use `make` to build the binaries. Per default, the project only builds the USB camera sample, not requiring any Ximea software. If you would like to build the Ximea sample, add the flag `-DBUILD_XIMEA=ON` to the cmake command.

## Starting the program

Before starting the program, adjust the settings in [config.yaml](asd) to your requirements. You can then start the programs from the build folder using

```
./usbCamStreamer
```

This will run the streamer program, which defaults to read the config file in `../src/config.yaml` relative to the executable. Alternatively, you can define the location of the config file as command line argument of the application, e.g.

```
./usbCamStreamer ../src/config.yaml
```
has the same effect as calling with no parameter. The analog procedure can be performed for the Ximea sample, for which the executable is called `ximeaStreamer`. At startup, both programs wait for a client to connect to the opened TCP socket, which is [per default]() on localhost, port 5001. If you do not yet have a video sink, you can run

```
ffplay  -probesize 32 -sync ext tcp://127.0.0.1:5001
```

in an additional terminal to connect to the open port and start playing back the streamed video. The streamer will now proceed to open the camera defined in [config.yaml](asf) and will finally stream the camera feed to the ffplay player instance. Note that ffplay, even with the above low latency settings, adds considerable delay.

You can gracefully quit both programs by pressing `q` while in the video player. This will quit the player, and inform the streamer that the TCP partner has shut down, which causes the streamer to close the camera and terminate.
