#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "secondaires.h"
int main ( int argc, char** argv )
{
SDL_Surface *objet=NULL,*objet1=NULL,*objet2=NULL,*ecran=NULL;
SDL_Rect positionobjet, positionobjet1, positionobjet2;
ES entite;
ES1 entite1;
ES2 entite2;
SDL_Init(SDL_INIT_VIDEO);
ecran=SDL_SetVideoMode(600,600,32,SDL_HWSURFACE);
SDL_Flip(ecran);
SDL_Delay(5000);
afficher_objet(entite);
afficher_objet1(entite1);
afficher_objet2(entite2);
SDL_FreeSurface(ecran);
SDL_FreeSurface(objet);
SDL_FreeSurface(objet1);
SDL_FreeSurface(objet2);
SDL_Quit();
return 0;
}
