#include<SDL/SDL.h> 
struct Enemy 
{  SDL_Surface *en; 
   SDL_Rect positionen; 
   int direction ; 
    int distance ; 
    int position_ini; 
}; 
typedef struct Enemy enemy; 
enemy init_enemy(enemy enemyy);
enemy deplacement_aleatoireenemy(enemy enemyy);
