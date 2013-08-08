#include "game.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using std::cout;
SDL_Surface* load_temp_tile(SDL_Surface* tile);
///from testing tools
///intitializes tile surfaces to allow render to run
void tile_loader1(tile_surfaces* s);
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
void insert_loop();
game_class::game_class()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    running=true;
    surfaces=new tile_surfaces;
    cout<<surfaces<<" ,16"<<"\n";
    surfaces->testing_load();
    /*surfaces->set_red(load_temp_tile);
    surfaces->set_blue(load_temp_tile);
    surfaces->set_black(load_temp_tile);*/
    player.set_window(&window);
    //tile_loader1(surfaces);
    ///apply_surface(0,0,surfaces->get_red(),window.get_screen());
    cout<<surfaces->get_red()<<"\n";
    ///testing
    ///insert_loop();
    void insert_loop();
    map=new map_class(this);
    map->set_window(&window);
    srand(time(0));
    //tile_loader1(surfaces);
    //apply_surface(0,0,surfaces->get_red(),window.get_screen());
    map->set_game(this);
}
tile_surfaces* game_class::get_surfaces()
{
    return surfaces;
}
