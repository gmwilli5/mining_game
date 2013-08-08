#include "game.h"
#include "SDL/SDL.h"
void game_class::events(SDL_Event* event)
{
    if(event->type==SDL_QUIT){
        SDL_Quit();
        running=false;
    }
}
