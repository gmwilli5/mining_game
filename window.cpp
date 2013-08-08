#include "window.h"
#include "SDL/SDL.h"
window_class::window_class()
{
    screen=SDL_SetVideoMode(1000,800,32,SDL_HWSURFACE);
}
SDL_Surface* window_class::get_screen()
{
    return screen;
}
