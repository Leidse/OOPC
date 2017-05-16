// example:
// definition of the functions of a rectangle object

#include "muur.hpp"

muur::muur( window & w, const vector & start, const vector & end, bool fill):
   drawable( w, start, end - start ),
   end( end ),
   left(   w, vector( start.x, start.y ), vector( start.x, end.y   ) ),
   right(  w, vector( end.x,   start.y ), vector( end.x,   end.y   ) ),
   top(    w, vector( start.x, start.y ), vector( end.x,   start.y ) ),
   bottom( w, vector( start.x, end.y   ), vector( end.x,   end.y   ) ),
   left2(   w, vector( (start.x+1), start.y ), vector( (start.x+1), end.y   ) ),
   right2(  w, vector( (end.x-1),   start.y ), vector( (end.x-1),   end.y   ) ),
   top2(    w, vector( start.x, (start.y+1) ), vector( end.x,   (start.y+1) ) ),
   bottom2( w, vector( start.x, (end.y-1)  ), vector( end.x,   (end.y-1)  ) ),
   fill (fill)
   {}
void muur::draw(){
    if (fill == true){
        left2.draw();
        right2.draw();
        top2.draw();
        bottom2.draw();
    }
    left.draw();
    right.draw();
    top.draw();
    bottom.draw();
}

void muur::update(){
    fill = ! fill;
}

