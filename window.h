#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED
#include "SDL/SDL.h"
class window_class{
    private:
        SDL_Surface* screen;
    public:
        window_class();
        SDL_Surface* get_screen();
        ///handles window events such as resize
        void events(SDL_Event* event);
        friend void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
};
#endif // WINDOW_H_INCLUDED
