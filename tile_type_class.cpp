#include "tile_type_class.h"
tile_type_class::tile_type_class()
{

}
tile_type_class::tile_type_class(tile_type new_type)
{
    type1=new_type;
}
tile_type_class::tile_type_class(int new_type)
{
    type=new_type;
}
tile_type_class::tile_type_class(tile_type new_type,tile_surfaces* new_surfaces)
{
    type1=new_type;
    surfaces=new_surfaces;
}
void tile_type_class::set_type(tile_type new_type)
{
    type1=new_type;
}
void tile_type_class::set_type(int new_type)
{
    type=new_type;
}
tile_type tile_type_class::get_type()
{
    return type1;
}
int tile_type_class::get_type(int o)
{
    return type;
}
