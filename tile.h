#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
#include "tile_surfaces.h"
#include "tile_type_class.h"
//#include "game.h"
///temporally redefined in map.h to prevent incomplete type compiler error
class game_class;
class tile_class{
    private:
        SDL_Surface* tile;
        tile_type type;
        vec2 position;
        vec2 pixel_pos;
        game_class* game;
        tile_surfaces* surfaces;
        bool changed;
        //tile_class();
        tile_type_class test_type;
        void load_tile();
        void sync_position();
    public:
        tile_class();
        tile_class(tile_type new_type,int x,int y);
        tile_class(tile_type new_type,int x,int y,game_class* new_game);
        tile_class(tile_type new_type,int x,int y,tile_surfaces* new_surf);
        tile_class(tile_type new_type,int x,int y,SDL_Surface* new_surf);
        tile_class(tile_type new_type,int x,int y,SDL_Surface* new_surf,tile_type_class new_test_type);
        void render(SDL_Surface* screen,SDL_Surface* im);
        void re_innit(tile_type new_type,int x,int y,game_class* new_game);
        void re_innit(tile_type new_type,int x,int y,tile_surfaces* new_surf);
        void re_innit(tile_type new_type,int x,int y,SDL_Surface* new_surf);
        void re_innit(tile_type new_type,int x,int y,SDL_Surface* new_surf,tile_type_class new_test_type);
        void render(SDL_Surface* screen);
        void set_game(game_class* new_game);
        void set_tile_type(tile_type new_type);
        void set_position(int x,int y);
        void set_pixel_pos(vec2 new_pos);
        void set_pixel_pos(int x,int y);
        int get_type(int o);
        tile_type get_type();
        vec2 get_pixel_pos();
        vec2 get_position();
        friend void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
        friend void change_vec2(vec2* vec,int new_x, int new_y);
};
#endif // TILE_H_INCLUDED
