#include "tile.h"
#include "tools.h"
#include "game.h"
#include <iostream>
using std::cout;
class game_class;
void change_vec2(vec2* vec,int new_x, int new_y);
tile_class::tile_class()
{

}
tile_class::tile_class(tile_type new_type,int x,int y)
{
    type=new_type;
    position=vec2_init(x,y);
    load_tile();
}
tile_class::tile_class(tile_type new_type,int x,int y,game_class* new_game)
{
    tile=NULL;
    type=new_type;
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    //game=new_game;
    load_tile();
    //tile=SDL_LoadBMP("enemy.bmp");
    sync_position();
    /*switch(type){
        case red:
            //tile=game->get_surfaces()->get_red();
            tile=SDL_LoadBMP("enemy.bmp");
            cout<<tile<<"\n";
            break;
        case blue:
            //tile=game->get_surfaces()->get_blue();
            tile=SDL_LoadBMP("enemy.bmp");
            cout<<tile<<"\n";
            break;
        case black:
            //tile=game->get_surfaces()->get_black();
            tile=SDL_LoadBMP("enemy.bmp");
            cout<<tile<<"\n";
            break;
    }*/
    //cout<<45<<"\n";
}
tile_class::tile_class(tile_type new_type,int x,int y,tile_surfaces* new_surf)
{
    tile=NULL;
    type=new_type;
    surfaces=new_surf;
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    load_tile();
    sync_position();
}
tile_class::tile_class(tile_type new_type,int x,int y,SDL_Surface* new_surf)
{
    tile=NULL;
    type=new_type;
    tile=new_surf;
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    load_tile();
    sync_position();
}
tile_class::tile_class(tile_type new_type,int x,int y,SDL_Surface* new_surf,tile_type_class new_test_type)
{
    tile=NULL;
    type=new_type;
    tile=new_surf;
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    test_type=new_test_type;
    load_tile();
    sync_position();
}
void tile_class::set_tile_type(tile_type new_type)
{
    type=new_type;
}
void tile_class::set_game(game_class* new_game)
{
    //game=new_game;
}
void tile_class::render(SDL_Surface* screen)
{
    //cout<<26<<"\n";
    //cout<<screen<<"\n";
    //cout<<game<<"\n";
    ///SDL_Surface* o=SDL_LoadBMP("enemy.bmp");
    //tile=SDL_LoadBMP("enemy.bmp");
    //apply_surface(position.x,position.y,tile,i);///screen);
    //game->get_surfaces();
    //load_tile();
    //cout<<tile<<"\n";
    //if(tile!=NULL){
    ///error here
    ///problem is with the tile pointer
        ///apply_surface(0,0,tile,screen);
        ///test
            ///this doesnt work
            ///apply_surface(position.x,position.y,o,screen);
            ///but  this does
            ///apply_surface(100,100,o,screen);
            //if(changed==true){
                //tile=SDL_LoadBMP("enemy.bmp");
                tile=SDL_LoadBMP("enemy.bmp");
                apply_surface(pixel_pos.x,pixel_pos.y,tile,screen);
                SDL_FreeSurface(tile);
                //changed=false;
            //}
            ///apply_surface(100,100,tile,screen);
    /*int i=position.x;
    i=position.y;
    o=tile;
    o=screen;*/
    //}
    //else{
        //cout<<tile<<"\n";
    //}
}
void tile_class::render(SDL_Surface* screen,SDL_Surface* im)
{
    //cout<<26<<"\n";
    //cout<<screen<<"\n";
    //cout<<game<<"\n";
    ///SDL_Surface* o=SDL_LoadBMP("enemy.bmp");
    //tile=SDL_LoadBMP("enemy.bmp");
    //apply_surface(position.x,position.y,tile,i);///screen);
    //game->get_surfaces();
    //load_tile();
    //cout<<tile<<"\n";
    //if(tile!=NULL){
    ///error here
    ///problem is with the tile pointer
        ///apply_surface(0,0,tile,screen);
        ///test
            ///this doesnt work
            ///apply_surface(position.x,position.y,o,screen);
            ///but  this does
            ///apply_surface(100,100,o,screen);
            //if(changed==true){
                //tile=SDL_LoadBMP("enemy.bmp");
                //tile=SDL_LoadBMP("enemy.bmp");
                //cout<<type<<"\n";
                apply_surface(pixel_pos.x,pixel_pos.y,im,screen);
                //SDL_FreeSurface(tile);
                //changed=false;
            //}
            ///apply_surface(100,100,tile,screen);
    /*int i=position.x;
    i=position.y;
    o=tile;
    o=screen;*/
    //}
    //else{
        //cout<<tile<<"\n";
    //}
}
void tile_class::load_tile()
{
    //game->get_surfaces()->red;
    //cout<<type<<"\n";
    switch(type){
        case red:
            ///tile=game->get_surfaces()->get_red();
            //tile=surfaces->get_red();
            //tile=SDL_LoadBMP("enemy.bmp");
            //cout<<tile<<"\n";
            //cout<<93<<"\n";
            break;
        case blue:
            ///tile=game->get_surfaces()->get_blue();
            //tile=surfaces->get_blue();
            //tile=SDL_LoadBMP("enemy.bmp");
            //cout<<98<<"\n";
            //cout<<tile<<"\n";
            break;
        case black:
            ///tile=game->get_surfaces()->get_black();
            //tile=surfaces->get_black();
            //tile=SDL_LoadBMP("enemy.bmp");
            //cout<<104<<"\n";
            //cout<<tile<<"\n";
            break;
    }
}
void tile_class::set_pixel_pos(int x,int y)
{
    change_vec2(&pixel_pos,x,y);
}
void tile_class::set_pixel_pos(vec2 new_pos)
{
    copy_vec2(new_pos,&pixel_pos);
}
void tile_class::re_innit(tile_type new_type,int x,int y,game_class* new_game)
{
    //tile=NULL;
    type=new_type;
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    //game=new_game;
    load_tile();
    //tile=SDL_LoadBMP("enemy.bmp");
    sync_position();
}
void tile_class::re_innit(tile_type new_type,int x,int y,tile_surfaces* new_surf)
{
    //tile=NULL;
    type=new_type;
    surfaces=new_surf;
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    load_tile();
    sync_position();
    cout<<surfaces<<","<<new_surf<<"\n";
}
void tile_class::re_innit(tile_type new_type,int x,int y,SDL_Surface* new_surf)
{
    //tile=NULL;
    type=new_type;
    cout<<type<<"\n";
    //tile=new_surf;
    //cout<<tile<<"\n";
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    load_tile();
    sync_position();
    changed=true;
}
void tile_class::re_innit(tile_type new_type,int x,int y,SDL_Surface* new_surf,tile_type_class new_test_type)
{
    //tile=NULL;
    type=new_type;
    tile=new_surf;
    position=vec2_init(x,y);
    pixel_pos=vec2_init(0,0);
    test_type=new_test_type;
    load_tile();
    sync_position();
}
void tile_class::sync_position()
{
    change_vec2(&pixel_pos,(position.x*10),(position.y*10));
}
vec2 tile_class::get_pixel_pos()
{
    return pixel_pos;
}
vec2 tile_class::get_position()
{
    return position;
}
void tile_class::set_position(int x,int y)
{
    change_vec2(&pixel_pos,x,y);
}
tile_type tile_class::get_type()
{
    ///non class type
    ///return type;
    //cout<<test_type.get_type()<<"\n";
    return test_type.get_type();
}
int tile_class::get_type(int o)
{
    return test_type.get_type(o);
}
