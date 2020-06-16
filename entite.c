#include<SDL/SDL.h>
#include<SDL/SDL_image>
#include "fonctionentite.h"
enemy init_enemy(enemy enemyy){
enemyy.en=SDL_loadBMP("detec.bmp"); 
enemyy.positionen.x=0; 
enemyy.positionen.y=300; 
enemyy.position_ini=0;
enemyy.direction=0; 
enemyy.distance=400; 
return (enemyy); 
}
enemy deplacement_aleatoireenemy(enemy enemyy){
if(enemyy.direction%2==1){ 
if(enemyy.positionen.x<enemyy.position_ini+enemyy.distance)
{enemyy.positionen.x+=10;}
else 
{enemyy.direction++;}} 
else 
if(enemyy.direction%2==0){
if(enemyy.positionen.x>enemy.position_ini)
{enemyy.positionen.x-=10;}
else {enemy.direction++;}} 
return (enemyy); }
