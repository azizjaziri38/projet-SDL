#include <math.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
int collisionAB(SDL_Surface *iA,SDL_Surface *iB,SDL_Rect pA,SDL_Rect pB)
{

    if  ((pA.y + iA->h) < pB.y )
      return 0;
    else if ( pA.y > (pB.y + iB->h))
      return 0;
    else if ( (pA.x + iA->w) < pB.x )
      return 0;
    else if ( pA.x > (pB.x +  iB->w))
      return 0;
return 1;

}
SDL_Color GetPixel(SDL_Surface *surface,int x,int y)
{
	SDL_Color color ;
	Uint32 col = 0 ;
	char* pPosition = ( char* ) surface->pixels ;
	pPosition += ( surface->pitch * y ) ;
	pPosition += ( surface->format->BytesPerPixel * x ) ;
	memcpy ( &col , pPosition , surface->format->BytesPerPixel ) ;
	SDL_GetRGB ( col , surface->format , &color.r , &color.g , &color.b ) ;
	return ( color ) ;}
