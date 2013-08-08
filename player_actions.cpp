#include "player.h"
void player_class::move(vec2 movement)
{
    position=position+movement;
}
void player_class::move(directions dirc)
{
    vec2 temp;
    switch(dirc){
        case none:
            return;
            break;
        case up:
            temp=vec2_init(0,1);
            move(temp);
            return;
            break;
        case down:
            temp=vec2_init(0,-1);
            move(temp);
            return;
            break;
        case left:
            temp=vec2_init(-1,0);
            move(temp);
            return;
            break;
        case right:
            temp=vec2_init(1,0);
            move(temp);
            return;
            break;
    }
}
void player_class::move(directions dirc,int tiles)
{
    vec2 temp;
    switch(dirc){
        case none:
            return;
            break;
        case up:
            temp=vec2_init(0,tiles);
            move(temp);
            return;
            break;
        case down:
            temp=vec2_init(0,-tiles);
            move(temp);
            return;
            break;
        case left:
            temp=vec2_init(-tiles,0);
            move(temp);
            return;
            break;
        case right:
            temp=vec2_init(tiles,0);
            move(temp);
            return;
            break;
    }
}
