#include "game.h"
//test change
void game_class::render()
{
    player.render();
    map->render();
    SDL_Flip(window.get_screen());
}
