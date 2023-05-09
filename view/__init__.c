#include <stdio.h>
#include <stdlib.h>

void handleEvents(int *X, int *Y) {
    SDL_Event ev;
    while (SDL_PollEvent(&ev) != 0)
    {
        switch (ev.type)
        {

        case SDL_MOUSEBUTTONDOWN:
            if (ev.button.button == SDL_BUTTON_LEFT)
            {
                printf("Clic gauche ! \n");
            }
            if (ev.button.button == SDL_BUTTON_RIGHT)
            {
                printf("Clic droit ! \n");
            }
            int clickX, clickY;
            SDL_GetMouseState(&clickY, &clickX);
            *X = (clickX - 230) / 60;
            *Y = (clickY - 230) / 60;
            printf("%d %d\n", *X, *Y);
            break;

        case SDL_QUIT:
            isRunning = false;
            return Y, X;
        default:
            return Y, X;
        }

    }
}