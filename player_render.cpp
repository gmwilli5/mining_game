#include "player.h"
#include "tools.h"
///void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
void player_class::render()
{
    apply_surface(pixel_position.x,pixel_position.y,player_tile,window->get_screen());
}
