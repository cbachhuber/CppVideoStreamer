# C++ USB camera video streamer

You want to stream a low latency h.264-video from a camera? Use this code! Thanks to its modular structure, the USB camera frame grabber can be easily replaced by code for other cameras such as [Ximea industrial cameras](https://www.ximea.com/), as shown in the second example. Video parameters such as resolution and frame rate can be set in the [config file](https://github.com/cbachhuber/CppVideoStreamer/blob/master/src/config.yaml).

This project is intended to kickstart C++ projects that require low latency video streaming and to provide a sample implementation of the x264 video encoder in C++.

## Software Prerequisites

This code has been tested on Ubuntu 16.04 LTS. The project relies on the multi-platform libraries OpenCV, ffmpeg, and x264. Thus, the following Ubuntu-specific instructions are similar on other platforms such as OS X or Windows. The following software is required for both code samples.

- Install CMake, build-essential, FFmpeg, x264, and OpenCV: `sudo apt install -y build-essential cmake ffmpeg libx264-dev x264 libopencv-dev`

For compiling the Ximea sample (disabled by default), the following additional setup steps need to be performed:
- Install the [Camera driver and SDK](https://www.ximea.com/support/wiki/apis/XIMEA_Linux_Software_Package). Installation is described on the linked webpage. During installation, do not use the -pcie argument.
- After installation, increase the USB buffer size in Linux (add 'echo 0 > /sys/module/usbcore/parameters/usbfs_memory_mb' to /etc/rc.local) and [allow the application to run in realtime](https://www.ximea.com/support/wiki/apis/Linux_USB30_Support#Allow-to-Run-Application-Realtime).

## Building

Clone this repository into a folder of your choice

```sh
git clone https://github.com/cbachhuber/CppVideoStreamer  # clone the repository
cd CppVideoStreamer  # change into the cloned directory
mkdir build && cd build  # create a build folder, and change into it
cmake ..  # configure the build files
make  # build the binaries
```

Per default, the project only builds the USB camera sample, not requiring any Ximea software. If you would like to build the Ximea sample, add the flag `-DBUILD_XIMEA=ON` to the cmake command, such that it reads `cmake -DBUILD_XIMEA=ON ..`.

## Starting the program

Before starting the program, adjust the settings in [config.yaml](https://github.com/cbachhuber/CppVideoStreamer/blob/master/src/config.yaml) to your requirements. You can then start the programs from the build folder using

```sh
./usbCamStreamer
```

This will run the streamer program, which defaults to read the config file in `../src/config.yaml` relative to the executable. Alternatively, you can define the location of the config file as command line argument of the application, e.g.

```sh
./usbCamStreamer ../src/config.yaml
```
has the same effect as calling with no parameter. The analog procedure can be performed for the Ximea sample, for which the executable is called `ximeaStreamer`. At startup, both programs wait for a client to connect to the opened TCP socket, which is [per default](https://github.com/cbachhuber/CppVideoStreamer/blob/master/src/config.yaml#L6) on localhost, port 5001. If you do not yet have a video sink, you can run

```sh
ffplay  -probesize 32 -sync ext tcp://127.0.0.1:5001
```

in an additional terminal to connect to the open port and start playing back the streamed video. The streamer will now proceed to open the camera defined in [config.yaml](https://github.com/cbachhuber/CppVideoStreamer/blob/master/src/config.yaml) and will finally stream the camera feed to the ffplay player instance. Note that ffplay, even with the above low latency settings, adds considerable delay.

You can gracefully quit both programs by pressing `q` while in the ffplay video player. This will quit the player, and inform the streamer that the TCP partner has shut down, which causes the streamer to close the camera and terminate.

## License

This repository is [licensed under GPL-3.0](./LICENSE).
We'd prefer to have a more permissive license, however, we're depending on [x264](https://www.videolan.org/developers/x264.html) which itself has a GPL license.
That [forces us to use GPL as well](https://en.wikipedia.org/wiki/GNU_General_Public_License#:~:text=Only%20if%20GPLed%20parts%20are%20used%20in%20a%20program%20(and%20the%20program%20is%20distributed)%2C%20then%20all%20other%20source%20code%20of%20the%20program%20needs%20to%20be%20made%20available%20under%20the%20same%20license%20terms).
