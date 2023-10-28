# 2D Game Engine

Build simple adventure games!

## Quick Start

First, ensure you have Visual Studio installed and setup for C++ development.

1. build.bat assumes you have the following SDL2 files in C:\dev\include\SDL

- all header files for SDL2 core library
- all headers for SDL2 image, ttf, and mixer libraries

2. put the following files in C:\dev\lib\SDL

- SDL2.lib
- SDL2_image.lib
- SDL2_mixer.lib
- SDL2_ttf.lib
- SDL2main.lib
- SDL2test.lib

3. You must also put these files in the ./build directory of your project:

- SDL2.dll
- SDL2_image.dll
- SDL2_mixer.dll
- SDL2_ttf.dll

4. Update the debug.bat file to point to your installation of Visual Studio

5. Run shell.bat using a command prompt.

6. Run build.bat to build the program.

7. Run debug.bat to open your game in Visual Studio.

## Links

[SDL2 Releases](https://github.com/libsdl-org/SDL/releases)
[SDL2 Image Releases](https://github.com/libsdl-org/SDL_image/releases)
[SDL2 Mixer Releases](https://github.com/libsdl-org/SDL_mixer/releases)
[SDL2 TTF Releases](https://github.com/libsdl-org/SDL_ttf/releases)



