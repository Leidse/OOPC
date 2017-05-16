#include <iostream>

#include "window.hpp"
#include "traktor.hpp"

int main(void) {
    window w( 128, 64, 2 );
    traktor t(w, 0);
    t.smokeprint();

    return 0;
}


