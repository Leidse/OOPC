#include <iostream>

#include "window.hpp"
#include "rectangle.hpp"

int main(void) {
    window w( 128, 64, 2 );
    rectangle rectagle1( w, 15, 35, 56, 50 );
    rectagle1.print();
    rectangle rectagle2(w, 15, 17, 33, 22);
    rectagle2.print();
   return 0;
}