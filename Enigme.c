#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <time.h>
#include "enigme.h"

void init_enigme(enigme *e)
{


e->p.x=0;
e->p.y=0;
e->img=NULL;
}
 void generate_afficher (SDL_Surface * screen  , char *image , enigme *e , int *alea)
{
srand(time(NULL));


 *alea = (rand()%6)+1;
 ;
 sprintf(image ,"%d.bmp",*alea);
  e->img = SDL_LoadBMP(image);
 SDL_BlitSurface(e->img,NULL,screen,&(e->p)) ;
SDL_Flip(screen);
  

}

 int solution_e (char *image ,int *ques)
 {
  int s =0 ;

  if(strcmp(image,"1.bmp")==0)
  {
     s =2 ;
  (*ques)=1;}
  else   if(strcmp(image,"2.bmp")==0)
  {
  s =3;
(*ques)=2;

  }
  else if(strcmp(image,"3.bmp")==0)
  {
  s =1;
(*ques)=3;
  }
  else if(strcmp(image,"4.bmp")==0)
  {
  s =2;
(*ques)=4;
  }
  else if(strcmp(image,"5.bmp")==0)
  {
  s =2;
(*ques)=5;
  }
  else if(strcmp(image,"6.bmp")==0)
  {
  s =1;
(*ques)=6;
  }
  return s; 
 }

int resolution (  )
{
SDL_Event event ;
  
  int  continuer=1;

while(continuer)
{
SDL_PollEvent(&event);
switch(event.type)
{

       case SDL_KEYDOWN :
            switch( event.key.keysym.sym )
                {
 case  SDLK_a:
 return  1;
  break ;
  case  SDLK_b :
  return  2;
 

  break;
  case SDLK_c:
 return  3 ;
  break;
   }
      

}
 
}
}
 void afficher_resultat (SDL_Surface *screen,int s,int r,enigme *e ,int* ques)
 {
SDL_Surface *image=NULL;
 switch(*ques){
case 1:

image= SDL_LoadBMP("1r.bmp");
break;
case 2:

image=SDL_LoadBMP("2r.bmp");
break;
case 3:

image=SDL_LoadBMP("3r.bmp");
break;
case 4:

image=SDL_LoadBMP("4r.bmp");
break;
case 5:

image=SDL_LoadBMP("5r.bmp");
break;
case 6:

image=SDL_LoadBMP("6r.bmp");
break;

}

  if (r==s)
  {
e->img=SDL_LoadBMP("yes.bmp");
  SDL_BlitSurface(e->img, NULL, screen, &(e->p)) ;
       
  }
  else
  {
  e->img=SDL_LoadBMP("no.bmp");
  SDL_BlitSurface(e->img, NULL, screen, &(e->p)) ;
}
SDL_Flip(screen);
SDL_FreeSurface(image);
SDL_FreeSurface(e->img);

 
 }
