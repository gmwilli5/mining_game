#include "tile_type_class.h"
tile_type_class::tile_type_class(tile_type new_type,tile_surfaces* surfaces)
{
    type=new_type;
    surfaces=new_surfaces;
}
void tile_type_class::set_type(tile_type new_type)
{
    type=new_type;
}
tile_type tile_type_class::get_type()
{
    return type;
}
