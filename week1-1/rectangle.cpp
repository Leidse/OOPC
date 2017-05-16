#include "rectangle.hpp"

void rectangle::print(){

   int x0 = start_x;
   int y0 = start_y;
   int x1 = end_x;
   int y1 = end_y;

    for(int j = y0; j < y1; j++) {
        for(int i = x0; i < x1; i++) {
            w.draw(i, j);
        }
    }
}
