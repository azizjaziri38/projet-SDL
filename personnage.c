#include "personnage.h" 
#include <SDL/SDL_image.h>
#include <SDL/SDL.h> 
void init_perso(personnage pers){
pers.imageperso=SDL_LoadBMP("..."); 
pers.positionperso.x=...; 
pers.positionperso.y=...; 
pers.vie=3; 
pers.score=0; 
}
void deplacer_perso(char direction,personnage pers){

if(direction=='d'){
          pers.imageperso=SDL_LoadBMP(".."); 
          pers.positionperso.x+=15; } 
 else 
     if(direction=='g'){ 
          pers.imageperso=SDL_LoadBMP("..."); 
          pers.positionperso.x-=15; }
 else 
     if(direction=='h'){
          pers.imageperso=SDL_LoadBMP("..."); 
          pers.positionperso.y-=15; } 
 else 
     if(direction=='b'){
          pers.imageperso=SDL_LoadBMP("..."); 
          pers.positionperso.y+=15; } 
}
int vie_perso(personnage pers){
do {
pers.vie=pers.vie-1; 
}while(pers.vie>3); 
}
