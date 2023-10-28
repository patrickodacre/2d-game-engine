@echo off

pushd .\build
cl -Zi ..\code\main.cpp^
	-I "C:\dev\include"^
	-link /LIBPATH:C:\dev\lib\SDL^
	SDL2main.lib^
	SDL2.lib^
	SDL2_image.lib^
	SDL2_ttf.lib^
	SDL2_mixer.lib^
	user32.lib^
	shell32.lib^
	-OUT:game.exe^
	-SUBSYSTEM:CONSOLE
popd