#include "game.h"
//test change
void game_class::render()
{
    player.render();
    //map->render();
    ///test render function
    ///todo number 4
    map->render_test();
    SDL_Flip(window.get_screen());
}
