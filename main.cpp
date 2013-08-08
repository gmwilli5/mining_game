#include "main.h"
void insert_loop();
int main()
{
    //window_class w;
    //player_class p;
    //game_class *game=new game_class;
    game_class g;
    g.main_game_loop();
    /*tile_class* t=new tile_class(red,0,0,NULL);
    t->render(w.get_screen());
    tile_class* t2=new tile_class(red,100,100,NULL);
    t2->set_pixel_pos(10,10);
    t2->render(w.get_screen());*/
    //map_class m(&g);
    //m.set_window(&w);
    //m.render();
    //tile_class world[80][100];
    /*int temp;
    for(int iii=0;iii<160;iii++){
        for(int ooo=0;ooo<200;ooo++){
            temp=rand();
            if(temp%3<3){
                world[iii][ooo]=new tile_class(red,ooo,iii,game);
            }
            if(temp%3>3&&temp%3<6){
                world[iii][ooo]=new tile_class(blue,ooo,iii,game);
            }
             if(temp%3>6){
                world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }
            else{
                world[iii][ooo]=new tile_class(black,ooo,iii,game);
            }
        }
    }*/
    //world[0][0]=new tile_class(red,0,0,game);
    //world[0][0].render(w.get_screen());
    //SDL_Flip(w.get_screen());
    //insert_loop();
    //while(true){
        //p.set_pos_x(9);
    //}
}
