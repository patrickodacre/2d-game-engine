# 2D Game Engine

Build simple adventure games!

## Quick Started

First, ensure you have Visual Studio installed and setup for C++ development.

1. build.bat assumes you have the following SDL2 files in the following directories:

- "C:\dev\include\SDL
-- all header files for SDL2 core library
-- all headers for SDL2 image, ttf, and mixer libraries

* "C:\dev\lib\SDL
-- SDL2.lib
-- SDL2_image.lib
-- SDL2_mixer.lib
-- SDL2_ttf.lib
-- SDL2main.lib
-- SDL2test.lib

2. You must also put these files in your ./build directory:

- SDL2.dll
- SDL2_image.dll
- SDL2_mixer.dll
- SDL2_ttf.dll

3. Update the debug.bat file to point to your installation of Visual Studio

4. Open a command prompt and run the shell.bat file in the root of this project.

This will setup your command prompt instance to compile using MSVC.

5. Run build.bat to build the program.

6. Run debug.bat to open your game in Visual Studio.



