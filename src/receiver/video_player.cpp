#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

#include <SDL2/SDL.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#include "decoder.h"

const char* videoUrl = "tcp://127.0.0.1:5001";
// const char * videoUrl = "tcp://10.152.4.207:5000";
// const char * videoUrl = "tcp://10.152.4.195:5000";
int port = 5002;
const char* targetIp = "127.0.0.1";
bool video = true;
bool fullscreen = false;
int vsync = 1;
const int targetWidth = 1280, targetHeight = 720;
int height = 720, width = 1280;  // will be overwritten by the video dimensions in the decoder; definition here
                                 // necessary if no video is used

bool readyToQuit = false;                                                                    // Quits all threads
uint8_t** argbSrc = static_cast<uint8_t**>(malloc(sizeof(uint8_t*) * 4));  // Pointer to the decoded image
bool newImage =
    false;  // Set to true by the decoder when it decodes a frame. Set to false after oculus as copied a decoded frame
#ifdef ARTIFICIAL_DELAY
unsigned int listlength = 0;
#endif

int main(int argc, char* argv[])
{

    if (argc == 2)
    {
        videoUrl = argv[1];
    }
    else
    {
        std::cout << "Decoding video from default url:" << videoUrl << ". For other sources, use e.g. '" << argv[0]
             << " tcp://10.152.4.207:5000'\n";
    }

    // SDL Inits
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Failed to initialize SDL! SDL Error :" << SDL_GetError() << std::endl;
    }

    const int display = 0;
    //	if (SDL_GetNumVideoDisplays() > 1) {
    //		cout << "Choose display for video output.\n\n 0 = default desktop,\n 1 = secondary screen,\n etc." <<
    // endl;
    //		cin >> display;
    //	}

    auto* event = new SDL_Event();

    auto* pixelData = static_cast<uint8_t*>(malloc(static_cast<size_t>(targetWidth) * targetHeight * 4 * sizeof(uint8_t)));
    uint8_t** pixels = nullptr;
    int* argbStride = nullptr;
    pixels = static_cast<uint8_t**>(malloc(sizeof(uint8_t*) * 4));
    pixels[0] = pixelData;
    pixels[1] = pixelData + static_cast<ptrdiff_t>(targetWidth) * targetHeight;
    pixels[2] = pixelData + static_cast<ptrdiff_t>(targetWidth) * targetHeight * 2;
    pixels[3] = pixelData + static_cast<ptrdiff_t>(targetWidth) * targetHeight * 3;
    argbStride = static_cast<int*>(malloc(sizeof(int) * 1));
    argbStride[0] = 4 * targetWidth;
    std::array<int, 1> test = {};
    test[0] = targetWidth * 4;

    std::thread dec;
    if (video)
    {
        dec = std::thread(Decoder, videoUrl, argbSrc, &newImage);
    }

    //------------------ UDP port setup ---------------
    struct sockaddr_in remaddr {};
    int sockFd = 0;
    const int slen = sizeof(remaddr);

    //-------------------------- UDP Port setup -----------------------
    sockFd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockFd == -1)
    {
        std::cout << "Could not create socket!" << std::endl;
    }

    memset(reinterpret_cast<char*>(&remaddr), 0, sizeof(remaddr));
    remaddr.sin_family = AF_INET;
    remaddr.sin_port = htons(port);
    if (inet_aton(targetIp, &remaddr.sin_addr) == 0)
    {
        fprintf(stderr, "inet_aton() failed\n");
        exit(1);
    }

    // Waiting for the first decoded image
    if (video)
    {
        //		cout << "Waiting for first decoded image..." << endl;
        while (!newImage)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
        std::cout << "Got first image, now displaying" << std::endl;
    }

    SDL_Window* win = SDL_CreateWindow("Videoplayer",
                                       SDL_WINDOWPOS_CENTERED_DISPLAY(display),
                                       SDL_WINDOWPOS_CENTERED_DISPLAY(display),
                                       targetWidth,
                                       targetHeight,
                                       SDL_WINDOW_OPENGL);
    if (!win)
    {
        std::cout << "Failed to create Window! SDL Error :" << SDL_GetError() << std::endl;
    }

    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    if (!ren)
    {
        std::cout << "Failed to create Renderer! SDL Error :" << SDL_GetError() << std::endl;
    }

    SDL_Texture* tex =
        SDL_CreateTexture(ren, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STREAMING, targetWidth, targetHeight);
    if (!tex)
    {
        std::cout << "Failed to create Texture! SDL Error :" << SDL_GetError() << std::endl;
    }

    if (fullscreen)
    {
        SDL_SetWindowFullscreen(win, SDL_WINDOW_FULLSCREEN);
        SDL_GL_SetSwapInterval(vsync);
    }

    //	std::chrono::time_point<std::chrono::high_resolution_clock> m_start_time, m_end_time;

    // Main displaying loop
    while (!readyToQuit)
    {
        // Polling for user signal to end
        while (SDL_PollEvent(event))
        {
            if (event->type == SDL_KEYDOWN)
            {
                if ((event->key.keysym.sym == SDLK_q) || (event->key.keysym.sym == SDLK_RETURN) ||
                    (event->key.keysym.sym == SDLK_SPACE) || (event->key.keysym.sym == SDLK_ESCAPE))
                {
                    readyToQuit = true;
                }

                const char* msg = nullptr;
                switch (event->key.keysym.sym)
                {
                    case SDLK_m:
                        msg = "m";
                        break;  // Increase QP by 5
                    case SDLK_n:
                        msg = "n";
                        break;  // Decrease QP by 5
                    case SDLK_c:
                        msg = "c";
                        break;  // Detect plane and insert new cube
                    case SDLK_r:
                        msg = "r";
                        break;  // Reset remaining hits
                    case SDLK_w:
                        msg = "g";
                        break;  // Increase box size
                    case SDLK_s:
                        msg = "s";
                        break;  // Decrease box size
                    case SDLK_o:
                        if (listlength > 0)
                        {
                            listlength = std::max(0U, listlength - 1);
                        }
                        std::cout << "\n" << listlength << "\n";
                        msg = "o";
                        break;  // Decrease delay
                    case SDLK_p:
                        listlength++;
                        std::cout << "\n" << listlength << "\n";
                        msg = "p";
                        break;  // Increase delay
                    default:
                        break;
                }
                sendto(sockFd, msg, sizeof(char), 0, reinterpret_cast<struct sockaddr*>(&remaddr), slen);
            }
            else
            {
                if ((event->type == SDL_MOUSEBUTTONDOWN))
                {  // Shoot!
                    sendto(sockFd, "t", sizeof(char), 0, reinterpret_cast<struct sockaddr*>(&remaddr), slen);
                }
            }
        }

        // Updating image if new one has been decoded
        if (newImage)
        {
            SDL_LockTexture(tex, nullptr, reinterpret_cast<void**>(pixels), test.data());

            // Copy decoded image into retrieved pointer from locking
            //			m_start_time = std::chrono::high_resolution_clock::now();
            if (video)
            {
                memcpy(*pixels, *argbSrc, static_cast<size_t>(targetWidth) * targetHeight * 4 * sizeof(uint8_t));
            }
            //			m_end_time = std::chrono::high_resolution_clock::now();

            SDL_UnlockTexture(tex);
            SDL_RenderClear(ren);
            SDL_RenderCopy(ren, tex, nullptr, nullptr);
            SDL_RenderPresent(ren);

            // Reset the newImage flag
            newImage = false;
            //			std::cout << "t_cpy=" <<
            // std::chrono::duration_cast<std::chrono::microseconds>(m_end_time - m_start_time).count() << "\n";
        }
    }

    readyToQuit = true;

    if (video)
    {
        dec.join();
    }

    // Shutting down SDL
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    std::cout << "Quit video player" << std::endl;

    return 0;
}
