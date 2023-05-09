#include <stdio.h>
#include <stdlib.h>
#include "SDL.h"
#include "SDL_image.h"
#include "SDM_mixer.h"

void main()
{
    SDL_Init(SDL_INIT_AUDIO);

    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    CreateWindow();
}

void CreatWindow()
{
    window = SDL_CreateWindow(&window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, SDL_WINDOW_RESIZABLE);

    renderer = SDL_CreateRenderer(window, -1, 0);
}