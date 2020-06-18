#ifndef COLLISION_H_
#define COLLISION_H_
#include "personnage.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

int collisionAB(SDL_Surface *iA,SDL_Surface *iB,SDL_Rect pA,SDL_Rect pB);
SDL_Color GetPixel(SDL_Surface *surface,int x,int y);
#endif
