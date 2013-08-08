#include "main.h"
void tile_loader1(tile_surfaces* s)
{
    ///cant do direct assignement because the get function is not a sdl_surface*
    SDL_Surface* temp=s->get_red();
    //s->get_red()=SDL_LoadBMP("enemy.bmp");
    temp=SDL_LoadBMP("enemy.bmp");
    temp=s->get_blue();
    //s->get_blue()=SDL_LoadBMP("enemy.bmp");
    temp=SDL_LoadBMP("enemy.bmp");
    temp=s->get_black();
    //s->get_black()=SDL_LoadBMP("enemy.bmp");
    temp=SDL_LoadBMP("enemy.bmp");
    ///to prevent compiler warning
    temp-=43;
}
void insert_loop()
{
    while(true)
    {
        int iii=rand();
        if(iii==0){
            iii=200;
        }
    }
}
SDL_Surface* load_temp_tile(SDL_Surface* tile)
{
    tile=SDL_LoadBMP("enemy.bmp");
    return tile;
}
