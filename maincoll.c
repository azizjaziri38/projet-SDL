#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "brandboxing.h"

#define LARGEURECRAN 640
#define HAUTEURECRAN 480
#define TITREECRAN "Ma fenetre SDL"
#define ICONE "icon.png"

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL;
    SDL_Rect positionImg1={0,0},positionImg2={320,240};
    int typeCollision;
    int continuer = 1;
    int vitX=2, vitY=2;
    SDL_Event event;

    ecran = initEcran(TITREECRAN, ICONE,LARGEURECRAN , HAUTEURECRAN);

    while(continuer)
    {
        SDL_PollEvent(&event);
        continuer = attendreAvantDeQuitter(event.type);
        backgroundColorSurface(ecran, 0, 0, 0);

        blitImageSurSurface(ecran, "icon.png", &positionImg2);
        blitImageSurSurface(ecran, "icon.png", &positionImg1);
        if(testCollision(positionImg1, positionImg2, &typeCollision))
        {
            deplacement(&positionImg1, event, vitX, vitY);
        }
        else
        {
            deplacementAutorise(typeCollision, &positionImg1, event, vitX, vitY);
        }

        attendreTemps(5);

        SDL_Flip(ecran);
    }
    SDL_Quit();
    return 0;
}
