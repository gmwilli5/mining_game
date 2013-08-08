#include "game.h"
#include <iostream>
int game_class::main_game_loop()
{
    SDL_Event event;
    int o=0;
    while(running==true){
        //std::cout<<o<<"\n";
        while(SDL_PollEvent(&event)){
            events(&event);
        }
        loop();
        render();
        o+=1;
    }
    return 0;
}
