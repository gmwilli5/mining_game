#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
#include "window.h"
class player_class{
    private:
        ///position on tile grid used as position interface
        vec2 position;
        ///points to the window used by render function
        window_class* window;
        ///holds the player picture
        SDL_Surface* player_tile;
        ///position of player in pixels on visible screen
        ///consider calculating it instead of putting it in memory if game uses too much ram
        ///should not be used outside class
        vec2 pixel_position;
        ///called in update function makes pixel_position match position after changes are made in the game loop
        ///cannot be called from outside class
        void sync_positions();
        ///in player_actions.cpp
        void move(vec2 movement);
    public:
        ///in player.cpp
        player_class();
        ///in player_variable_functions.cpp
        void set_position(vec2 new_pos);
        ///in player_variable_functions.cpp
        vec2 get_position();
        ///in player_variable_functions.cpp
        void set_pos_x(int x);
        ///in player_variable_functions.cpp
        void set_pos_y(int y);
        ///in player_actions.cpp
        ///moves one tile in given direction
        void move(directions dirc);
        ///in player_actions.cpp
        ///moves number of tiles passed in tiles in given direction
        void move(directions dirc,int tiles);
        ///in player_render.cpp
        void render();
        ///sets winodw class to point to a already created window passed in
        void set_window(window_class* new_window);
        ///use to set position vector for clarity
        friend void change_vec2(vec2* vec,int new_x, int new_y);
        ///used in render function to draw the surface cotaining the players image
        ///to the screen
        friend void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
        ///updates game logic called in the loop function in game object
        void update();
};
#endif // PLAYER_H_INCLUDED
