#include "player.h"
///add value checks
void player_class::set_position(vec2 new_pos)
{
    position=new_pos;
}
vec2 player_class::get_position()
{
    return position;
}
void player_class::set_pos_x(int x)
{
    position.x=x;
}
void player_class::set_pos_y(int y)
{
    position.y=y;
}
void player_class::set_window(window_class* new_window)
{
    window=new_window;
}
