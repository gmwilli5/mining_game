#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED
//#include <vector>
#include "tile.h"
#include "player.h"
#include "structs.h"
#include "game.h"
class game_class;
///consider using one array for on screen and 9 others one
///for each side the middle and corner for the rest of the world so it is easier to dynamically load tiles
class map_class{
    private:
        tile_class on_screen[80][100];
        ///maybe change to 2d array to make access easier
        ///internal class use only
        ///marks where in the world array the on_screen array starts
        vec2 array_position;
        ///marks the position of the camera in world array can be different from array position
        ///befor they are synced
        vec2 camera_position;
        ///points to the player used to check player position against tile showed on screen
        player_class* player;
        ///all loaded tiles that make up the world
        tile_class world[160][200];
        window_class* window;
        ///pointer to game object
        //game_class* game;
        SDL_Surface* tempsr;
        SDL_Surface* tempsblue;
        SDL_Surface* tempsblack;
        tile_surfaces t;
        game_class* game;
        bool re_innit;
        void randomize_tiles();
        ///syncs the camera position with the postition of the player in the world
        ///internal class use only
        ///called in update function
        void sync_camera();
        ///syncs the tiles in on_screen array with the camera position
        ///internal class use only
        ///called in update function after sync_camera
        ///needs to be redone to be more efficient
        void sync_tiles();
    public:
        map_class(game_class* new_game);
        void render();
        void set_window(window_class* new_window);
        void set_game(game_class* new_game);
        friend void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
        friend void copy_vec2(vec2 source,vec2 dest);
        void set_player(player_class* new_player);
        void set_window(window_class new_window);
        void update();
        ///loads the on_screen array from the world array starting at array_position
        void load_whole_onscreen();
        ///loads the row number passed in start from the world array into the row passed in row of the on_screen array
        void load_row_on_screen(vec2 start,int row);
        ///loads the colunm number passed in start from the world array into the colunm passed in colunm of the on_screen array
        void load_col_on_screen(vec2 start,int col);
};
#endif // MAP_H_INCLUDED
