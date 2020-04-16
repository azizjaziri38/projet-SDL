#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enigme.h"

void init_enigme(enigme * e)
{
/*struct enigme *e;
e =malloc (sizeof (struct enigme));*/
e->p.x=0;
e->p.y=0;
e->img=NULL;
}

 void generate_afficher (SDL_Surface * screen  , char image [MAX],enigme *e,int *alea)
{
//int test=alea ;
//do{
 *alea = 1+ rand()%6;
//}while(alea==test) ;
 sprintf(image ,"%d.bmp",*alea);
  e->img = SDL_LoadBMP(image);
 SDL_BlitSurface(e->img,NULL,screen,&(e->p)) ;
  SDL_Flip(screen) ;

}

 int solution_e (char image [MAX],int *ques)
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
(*ques)
  }
  else if(strcmp(image,"6.bmp")==0)
  {
  s =1;
(*ques)=6;
  }
  return s; 
 }

int resolution (int r, int continuer  )
{
SDL_Event event ;
  r=0 ;
   continuer=1;
SDL_PollEvent(&event);
while(continuer)
{
switch(event.type)
{
 case SDL_QUIT:
       continuer=0;
break ;

       case SDL_KEYDOWN :
            switch( event.key.keysym.sym )
                {
 case  SDLK_a:
 r= 1;
  break ;
  case  SDLK_b :
  r= 2;
 

  break;
  case SDLK_c:
  r=3 ;
  break;
   }
       break ;


}
  return r ;
}
}
 void afficher_resultat (SDL_Surface *screen,int s,int r,enigme *e,int* ques)
 {SDL_Surface *image=NULL;
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
SDL_BlitSurface(image, NULL, screen, &(e->p)) ;
        SDL_Flip(screen);
  if (r==s)
  {
e->img=SDL_LoadBMP("yes.bmp");
  SDL_BlitSurface(e->img, NULL, screen, &(e->p)) ;
        SDL_Flip(screen);
  }
  else
  {
  e->img=SDL_LoadBMP("no.bmp");
  SDL_BlitSurface(e->img, NULL, screen, &(e->p)) ;
        SDL_Flip(screen);
SDL_FreeSurface(image);
SDL_FreeSurface(e->img);
SDL_Quit();
  }
 }
