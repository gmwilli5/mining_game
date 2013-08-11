#include "map.h"
#include "structs.h"
#include <stdlib.h>
#include <iostream>
using std::cout;
//#include <time.h>
map_class::map_class(game_class* new_game)
{
    set_game(new_game);
    int temp;
    tile_class temp2(red,0,0,game->get_surfaces()->get_red());
    for(int iii=0;iii<160;iii++){
        for(int ooo=0;ooo<200;ooo++){
            temp=rand();
            if(temp%2==0){
            //if(temp<=RAND_MAX/3){
                //cout<<16<<"\n";
                temp2.re_innit(blue,ooo,iii,game->get_surfaces()->get_red());
                ///world[iii][ooo]=new tile_class(red,ooo,iii,game);
            }
            if(temp%3==0){
            //if((temp>RAND_MAX/3)&&temp<=((RAND_MAX/3)+RAND_MAX/3)){
                //cout<<20<<"\n";
                temp2.re_innit(blue,ooo,iii,game->get_surfaces()->get_blue());
                ///world[iii][ooo]=new tile_class(blue,ooo,iii,game);
            }
            if(temp%4==0){
             //if(temp>((RAND_MAX/3)+RAND_MAX/3)){
                 //cout<<24<<"\n";
                 temp2.re_innit(black,ooo,iii,game->get_surfaces()->get_black());
                ///world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }
            else{
                //cout<<28<<"\n";
                temp2.re_innit(black,ooo,iii,game->get_surfaces()->get_black());
                ///world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }
            /*if((temp%3)<3){
                cout<<16<<"\n";
                temp2.re_innit(red,ooo,iii,game);
                ///world[iii][ooo]=new tile_class(red,ooo,iii,game);
            }
            if((temp%3)>3&&(temp%3)<6){
                cout<<20<<"\n";
                temp2.re_innit(blue,ooo,iii,game);
                ///world[iii][ooo]=new tile_class(blue,ooo,iii,game);
            }
             if((temp%3)>6){
                 cout<<24<<"\n";
                 temp2.re_innit(black,ooo,iii,game);
                ///world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }
            else{
                cout<<28<<"\n";
                temp2.re_innit(black,ooo,iii,game);
                ///world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }*/
        }
    }
    load_whole_onscreen();
    tempsr=SDL_LoadBMP("red.bmp");
    tempsblue=SDL_LoadBMP("blue.bmp");
    tempsblack=SDL_LoadBMP("black.bmp");
    re_innit=true;
    cout<<game->get_surfaces()<<"\n";
}
void map_class::set_window(window_class* new_window)
{
    window=new_window;
}
void map_class::randomize_tiles()
{
    int temp;
    for(int iii=0;iii<160;iii++){
        for(int ooo=0;ooo<200;ooo++){
            temp=rand();
            if(temp%2==0){
                world[iii][ooo].set_tile_type(red);
            //if(temp<=RAND_MAX/3){
                //cout<<16<<"\n";
                //temp2.re_innit(blue,ooo,iii,game->get_surfaces()->get_red());
                ///world[iii][ooo]=new tile_class(red,ooo,iii,game);
            }
            if(temp%3==0){
                world[iii][ooo].set_tile_type(blue);
            //if((temp>RAND_MAX/3)&&temp<=((RAND_MAX/3)+RAND_MAX/3)){
                //cout<<20<<"\n";
                //temp2.re_innit(blue,ooo,iii,game->get_surfaces()->get_blue());
                ///world[iii][ooo]=new tile_class(blue,ooo,iii,game);
            }
            if(temp%4==0){
                world[iii][ooo].set_tile_type(black);
             //if(temp>((RAND_MAX/3)+RAND_MAX/3)){
                 //cout<<24<<"\n";
                 //temp2.re_innit(black,ooo,iii,game->get_surfaces()->get_black());
                ///world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }
            else{
                world[iii][ooo].set_tile_type(black);
                //cout<<28<<"\n";
                //temp2.re_innit(black,ooo,iii,game->get_surfaces()->get_black());
                ///world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }
        }
    }
}
void map_class::render()
{
    if(re_innit==true){
        randomize_tiles();
        re_innit=false;
    }
    for(int iii=0;iii<80;iii++){
        for(int ooo=0;ooo<100;ooo++){
            ///problem is here all tile types are using the first case in the switch statement
            ///I can temporerolly provide a solution by added tile pointers after the initialization function I think
            if(on_screen[iii][ooo].get_type()!=0){cout<<79<<"\n";}
            switch(on_screen[iii][ooo].get_type()){
                case red:
                    on_screen[iii][ooo].render(window->get_screen(),tempsr);
                    break;
                case blue:
                    on_screen[iii][ooo].render(window->get_screen(),tempsblue);
                    break;
                case black:
                    on_screen[iii][ooo].render(window->get_screen(),tempsblack);
                    break;
            }
        }
    }
}
void map_class::load_whole_onscreen()
{
    for(int iii=array_position.y;iii<(array_position.y+80);iii++){
        for(int ooo=array_position.y;ooo<(array_position.x+100);ooo++){
            on_screen[iii][ooo]=world[iii][ooo];
            on_screen[iii][ooo].set_position(ooo,iii);
            ///cout<<ooo<<","<<iii<<"\n";
            on_screen[iii][ooo].set_pixel_pos((ooo*10),(iii*10));
        }
    }
}
void map_class::sync_tiles()
{
    ///figure out how to offset array position to make player stay in the middle of the screen
    ///copy_vec2(camera_position,&array_position);
    ///might work
    vec2 temp=vec2_init((camera_position.x+50),(camera_position.y+40));
    copy_vec2(temp,&array_position);
    load_whole_onscreen();
}
void map_class::load_row_on_screen(vec2 start,int row)
{
    for(int iii=0;iii<100;iii++){
        on_screen[row][iii]=world[start.y][start.x];
        start.x+=1;
    }
}
void map_class::load_col_on_screen(vec2 start,int col)
{
    for(int iii=0;iii<80;iii++){
        on_screen[iii][col]=world[start.y][start.x];
        start.y+=1;
    }
}
void map_class::sync_camera()
{
    copy_vec2(player->get_position(),&camera_position);
}
void map_class::set_game(game_class* new_game)
{
    game=new_game;
}
