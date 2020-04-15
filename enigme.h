#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>


#define SCREEN_WIDTH 900
#define SCREEN_HIGHT 600
#define MAX 20

typedef struct
{
 SDL_Surface * img ;
 SDL_Rect p;
}enigme;
int enigm(SDL_Surface * screen);
void init_enigme(enigme * e) ;
void  generate_afficher (SDL_Surface * screen  , char image [MAX],enigme *e,int *alea) ;
 int solution_e (char image [MAX],int *ques) ;
int resolution (int r, int continuer);
void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *e,int *ques) ;

#endif 
