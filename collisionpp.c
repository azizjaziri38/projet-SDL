SDL_Color getRGB(SDL_Surface *pSurface,int x,int y)
{
SDL_Color color;
Uint32 col=0;
//Determine position
char* pPosition=(char* ) pSurface->pixels;
pPosition+= (pSurface->pitch * y);
pPosition+= (pSurface->format->BytesPerPixel *x);
memcpy(&col ,pPosition ,pSurface->format->BytesPerPixel);
//convertir color
SDL_GetRGB(col,pSurface->format, &color.r, &color.g, &color.b);
return (color);
}
int collision(SDL_Surface *masque,SDL_Rect position_joueur)
{
int x,y,w,h;
int x1,y1;
int x2,y2;
int x3,y3;
int x4,y4;
int x5,y5;
int x6,y6;
int x7,y7;
int x8,y8;
//position initiale et latgeur , hauteur de perso
x=position_joueur.x;
y=position_joueur.y;
w=position_joueur.w;
h=position_joueur.h;//fin pos perso

//cordonnees des 8 pts
x1=x;
y1=y;
x2=x+w/2;
y2=y;
x3=x+w;
y3=y;
x4=x;
y4=y+h/2;
x5=x;
y5=y+h;
x6=x+w/2;
y6=y+h;
x7=x+w;
y7:y+h;
x8:x+w;
y8:y+h/2; //fin
    SDL_Color color1=getRGB(masque,x1,y1);
    SDL_Color color2=getRGB(masque,x4,y4);
    SDL_Color color3=getRGB(masque,x5,y5);
    SDL_Color color4=getRGB(masque,x3,y3);
    SDL_Color color5=getRGB(masque,x8,y8);
    SDL_Color color6=getRGB(masque,x7,y7);
    SDL_Color color7=getRGB(masque,x2,y2);
    SDL_Color color8=getRGB(masque,x6,y6);
    if((color1.r==0 && color1.g==0 && color1.b==0)||(color2.r==0 && color2.g==0 && color2.b==0)||(color3.r==0 && color3.g==0 && color3.b==0))
    return(1);
    else
    if((color4.r==0 && color4.g==0 && color4.b==0)||(color5.r==0 && color5.g==0 && color5.b==0)||(color6.r==0 && color6.g==0 && color6.b==0))
    return(1);
    else
    if((color1.r==0 && color1.g==0 && color1.b==0)||(color7.r==0 && color7.g==0 && color7.b==0)||(color4.r==0 && color4.g==0 && color4.b==0))
    return(1);
    else
    if((color3.r==0 && color3.g==0 && color3.b==0)||(color8.r==0 && color8.g==0 && color8.b==0)||(color6.r==0 && color6.g==0 && color6.b==0))
    return(1);
    else
    return(0);
}
