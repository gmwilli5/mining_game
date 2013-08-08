#include "SDL/SDL.h"
#include <iostream>
using std::cout;
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination )
{
    //cout<<"6 tools"<<"\n";
    ///Make a temporary rectangle to hold the offsets
    SDL_Rect offset;
    //cout<<"8 tools"<<"\n";
    ///Give the offsets to the rectangle
    offset.x = x;
    offset.y = y;
        ///Blit the surface
    SDL_BlitSurface( source, NULL, destination, &offset );
}
//SDL_Surface* load_temp_tile()
