#include "structs.h"
vec2 vec2_init(int new_x,int new_y)
{
    vec2 temp;
    temp.x=new_x;
    temp.y=new_y;
    return temp;
}
void change_vec2(vec2* vec,int new_x, int new_y)
{
    vec->x=new_x;
    vec->y=new_y;
}
void copy_vec2(vec2 source,vec2* dest)
{
    dest->x=source.x;
    dest->y=source.y;
}
vec2 operator+(vec2 a,vec2 b)
{
    vec2 temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
