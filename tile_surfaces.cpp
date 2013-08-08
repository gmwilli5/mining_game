#include "tile_surfaces.h"
tile_surfaces::tile_surfaces()
{
    red=NULL;
    blue=NULL;
    black=NULL;
}
void tile_surfaces::set_red(SDL_Surface *(*supplied_setter)(SDL_Surface*))
{
    red=supplied_setter(red);
}
void tile_surfaces::set_blue(SDL_Surface *(*supplied_setter)(SDL_Surface*))
{
    blue=supplied_setter(blue);
}
void tile_surfaces::testing_load()
{
    red=SDL_LoadBMP("enemy.bmp");
    blue=SDL_LoadBMP("enemy.bmp");
    black=SDL_LoadBMP("enemy.bmp");
}
void tile_surfaces::set_black(SDL_Surface *(*supplied_setter)(SDL_Surface*))
{
    black=supplied_setter(black);
}
SDL_Surface* tile_surfaces::get_red()
{
    return red;
}
SDL_Surface* tile_surfaces::get_blue()
{
    return blue;
}
SDL_Surface* tile_surfaces::get_black()
{
    return black;
}
