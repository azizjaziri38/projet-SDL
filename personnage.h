#include<SDL/SDL.h> 	
typedef struct { 
int vie ; 
int score; 
SDL_Surface *imageperso; 
SDL_Rect positionperso;
}personnage; 
personnage pers;
void init_perso(personnage pers); 
void deplacer_perso(char direction,personnage pers);
void afficher_perso(personnage pers);
int vie_perso(personnage pers);

