#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "window.h"
#include "player.h"
#include "map.h"
#include "tile.h"
#include "tile_surfaces.h"
class map_class;
class tile_surfaces;
class game_class{
    private:
        ///try to make it not a pointer
        map_class* map;
        player_class player;
        window_class window;
        bool running;
        tile_surfaces* surfaces;
    public:
        game_class();
        void loop();
        void render();
        void events(SDL_Event* event);
        tile_surfaces* get_surfaces();
        int main_game_loop();
        friend void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
};
#endif // GAME_H_INCLUDED
