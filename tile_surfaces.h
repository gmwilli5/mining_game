#ifndef TILE_SURFACES_H_INCLUDED
#define TILE_SURFACES_H_INCLUDED
#include "SDL/SDL.h"
class tile_surfaces{
    private:
        SDL_Surface* red;
        SDL_Surface* blue;
        SDL_Surface* black;
    public:
        tile_surfaces();
        ///these functions are passed a function pointer that takes a SDL_Surface* and sets it equal to something
        void set_red(SDL_Surface* (*supplied_setter)(SDL_Surface*));
        void set_blue(SDL_Surface* (*supplied_setter)(SDL_Surface*));
        void set_black(SDL_Surface* (*supplied_setter)(SDL_Surface*));
        void testing_load();
        SDL_Surface* get_red();
        SDL_Surface* get_blue();
        SDL_Surface* get_black();
};
#endif // TILE_SURFACES_H_INCLUDED
