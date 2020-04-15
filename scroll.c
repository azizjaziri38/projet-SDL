#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include "scroll.h"




void scrolling(SDL_Surface* ecran, SDL_Surface* background , int continuer , SDL_Rect camera)
{
camera.x=0;camera.y=0;camera.w=900;camera.h=800;
int x=0,y=0;
const int speed=50;
Uint32 start;
background=SDL_LoadBMP("img.bmp");
SDL_BlitSurface(background,&camera,ecran,NULL);
SDL_Flip(ecran);

SDL_Event event;
while(continuer)
{ 
SDL_WaitEvent(&event);
switch(event.type)
{
 case SDL_QUIT:
			continuer=0;
		        break;
	          case SDL_KEYDOWN:
			switch(event.key.keysym.sym)
			{ 
			case SDLK_RIGHT:
				x+=speed;
					camera.x +=speed;
				SDL_BlitSurface(background,&camera,ecran,NULL);
				
SDL_Flip(ecran);
break;

			case SDLK_LEFT:
				x-=speed;
					camera.x -=speed;
				SDL_BlitSurface(background,&camera,ecran,NULL);
				
SDL_Flip(ecran);
break;
}
break;
}
SDL_Flip(ecran);
}
}
