typedef struct
{
SDL_Surface *objet;
SDL_Rect positionobjet;
}ES;
typedef struct
{
SDL_Surface *objet1;
SDL_Rect positionobjet1;
}ES1;
typedef struct
{
SDL_Surface *objet2;
SDL_Rect positionobjet2;
}ES2;
void afficher_objet(ES entite);
void afficher_objet1(ES1 entite1);
void afficher_objet2(ES2 entite2);

background
{
identifiant
image
position
}
