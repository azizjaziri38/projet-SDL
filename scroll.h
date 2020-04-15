#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>



#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES

#define largeur 900
#define hauteur 800

void scrolling(SDL_Surface* ecran, SDL_Surface* background , int continuer , SDL_Rect camera);
#endif
