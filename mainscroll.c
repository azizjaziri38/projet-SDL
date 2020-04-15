#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include "scroll.h"
#include "scroll.c"



int main ()
{
SDL_Surface* ecran=NULL , *background=NULL;
SDL_Rect camera;
int continuer=1;
camera.x=0;camera.y=0;camera.w=0;camera.h=0;
SDL_Init(SDL_INIT_VIDEO);
ecran=SDL_SetVideoMode(largeur,hauteur,32,SDL_SWSURFACE);
SDL_MapRGB(ecran->format, 255,0,0);
scrolling(ecran, background ,  continuer , camera);

SDL_Flip(ecran);
SDL_FreeSurface(background);
SDL_Quit();
return EXIT_SUCCESS;
}
