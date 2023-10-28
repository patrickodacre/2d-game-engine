#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <iostream>

SDL_Window *Window;
SDL_Renderer *Renderer;

const char * TITLE = "My Awesome Game";
const int WIN_WIDTH = 640;
const int WIN_HEIGHT = 480;

int Init()
{

    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("Failed to initialize SDL! SDL_GetError: %s\n", SDL_GetError());

        return false;
    }
    else
    {
        Window = SDL_CreateWindow(TITLE,
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            WIN_WIDTH,
            WIN_HEIGHT,
            0
        );

        if(!Window)
        {
            SDL_Log("Failed to create window! SDL_GetError: %s\n", SDL_GetError());

            return false;
        }
        else
        {
            Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
            if(!Renderer)
            {
                SDL_Log("Failed to create renderer!\n");

                return false;
            }
            else
            {
                SDL_SetRenderDrawColor(Renderer, 0xff, 0xff, 0xff, 0xff);

                int flags = IMG_INIT_PNG;
                int initted = IMG_Init(flags);
                if((initted&flags) != flags)
                {
                    SDL_Log("IMG_Init: Failed to init required jpg and png support!\n");
                    SDL_Log("IMG_Init: %s\n", IMG_GetError());

                    return false;
                }
            }
        }
    }

    return true;
}

int main(int argc, char *argv[])
{

    if(!Init())
    {
        SDL_Log("Failed to initalize!\n");
    }
    else
    {
        int Running = 1;
        SDL_Event e;

        while(Running)
        {
            while(SDL_PollEvent(&e) != 0)
            {
                if(e.type == SDL_QUIT)
                {
                    Running = 0;
                }
            }

            SDL_RenderPresent(Renderer);

            SDL_SetRenderDrawColor(Renderer, 0xff, 0, 0, 0xff);
            SDL_RenderClear(Renderer);
        }
    }

    // Shutdown
    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(Window);
    Renderer = NULL;
    Window = NULL;

    IMG_Quit();
    SDL_Quit();
    return 0;
}