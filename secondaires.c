#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "secondaires.h"
void afficher_objet(ES entite)
{
//SDL_FillRect;SDL_SetcolorKey;
SDL_BlitSurface(objet,NULL,ecran,&positionobjet);
SDL_Flip(ecran);
}
void afficher_objet1(ES1 entite1)
{
//SDL_FillRect;SDL_SetcolorKey;
SDL_BlitSurface(objet1,NULL,ecran,&positionobjet1);
SDL_Flip(ecran);
}
void afficher_objet2(ES2 entite2)
{
//SDL_FillRect;SDL_SetcolorKey;
SDL_BlitSurface(objet2,NULL,ecran,&positionobjet2);
SDL_Flip(ecran);
}
