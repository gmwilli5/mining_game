#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED
#include "SDL/SDL.h"
struct vec2{
    int x;
    int y;
};
vec2 vec2_init(int new_x, int new_y);
void change_vec2(vec2* vec,int new_x, int new_y);
void copy_vec2(vec2 source,vec2* dest);
vec2 operator+(vec2,vec2);
///filled with pointers to surfaces loaded with tile images
///changed to class
/*struct tile_surfaces{
    SDL_Surface* red;
    SDL_Surface* blue;
    SDL_Surface* black;
};*/
enum tile_type{
    red,
    blue,
    black,
};
enum directions{
    none,
    up,
    down,
    left,
    right,
};
#endif // STRUCTS_H_INCLUDED
