#ifndef TILE_TYPE_CLASS_H_INCLUDED
#define TILE_TYPE_CLASS_H_INCLUDED
#include "structs.h"
#include "tile_surfaces.h"
class tile_type_class{
    private:
        tile_type type1;
        int type;
        tile_surfaces* surfaces;
    public:
        tile_type_class();
        tile_type_class(tile_type new_type);
        tile_type_class(int new_type);
        tile_type_class(tile_type new_type,tile_surfaces* surfaces);
        void set_type(tile_type new_type);
        void set_type(int new_type);
        tile_type get_type();
        int get_type(int o);
};
#endif // TILE_TYPE_CLASS_H_INCLUDED
