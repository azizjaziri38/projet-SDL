#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enigme.h"
#include "enigme.c"


int main ()
{
SDL_Surface* screen=NULL, *menu=NULL;
SDL_Rect posback;
posback.x=0; posback.y=0;
SDL_Init(SDL_INIT_VIDEO||SDL_INIT_AUDIO);
screen = SDL_SetVideoMode(SCREEN_WIDTH , SCREEN_HIGHT , 32 , SDL_HWSURFACE);
SDL_MapRGB(screen->format, 255,0,0);
/*menu = SDL_LoadBMP("img.bmp");*/
/* SDL_BlitSurface(menu,NULL,screen,&posback);*/
SDL_Flip(screen); 
	

int r, s,continuer;
int *ques;
char *image[MAX];
enigme* e;
int *alea; //= 1+ rand()%6;
init_enigme( e);
generate_afficher (screen  ,  image [MAX], e, alea);
solution_e ( image [MAX], ques);
resolution ( r, continuer  );
afficher_resultat (screen, s,  r, e, ques);
SDL_FreeSurface(screen);
SDL_Quit();
return EXIT_SUCCESS;
}
