#include <iostream>
#include <SDL2/SDL.h>

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{
    SDL_Init( SDL_INIT_EVERYTHING );

    SDL_Window *window = SDL_CreateWindow("Hello world", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

    if(NULL == window)
    {
        std::cout << "Could not create window: " << SDL_GetError( ) << std::endl;
        return 1;
    }

    SDL_Event windowEvent;

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 132, 188, 255, 255);

    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);




    while (true)
    {
        if (SDL_PollEvent( &windowEvent ))
        {
            if (SDL_QUIT == windowEvent.type)
            {
                break;
            }
        }
    }

    SDL_DestroyWindow( window );
    SDL_Quit();

    return EXIT_SUCCESS;
}