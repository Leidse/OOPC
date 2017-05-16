#include "traktor.hpp"
#include "window.hpp"
#include <math.h>

#define pi 3.14159265

template <class T> void swap( T& a, T& b ){
  T c(a); a=b; b=c;
}

void traktor::print() {
    
//roof
    int rectanglex0 = 15;
    int rectangley0 = 17;
    int rectanglex1 = 33;
    int rectangley1 = 22;

    for(int rectanglej = rectangley0; rectanglej < rectangley1; rectanglej++) {
        for(int rectanglei = rectanglex0; rectanglei < rectanglex1; rectanglei++) {
            w.draw(rectanglei, rectanglej);
        }
    }

//boddy
    rectanglex0 = 15;
    rectangley0 = 35;
    rectanglex1 = 56;
    rectangley1 = 50;

    for(int rectanglej = rectangley0; rectanglej < rectangley1; rectanglej++) {
        for(int rectanglei = rectanglex0; rectanglei < rectanglex1; rectanglei++) {
            w.draw(rectanglei, rectanglej);
        }
    }
    
//smookstack
    rectanglex0 = 45;
    rectangley0 = 24;
    rectanglex1 = 49;
    rectangley1 = 35;

    for(int rectanglej = rectangley0; rectanglej < rectangley1; rectanglej++) {
        for(int rectanglei = rectanglex0; rectanglei < rectanglex1; rectanglei++) {
            w.draw(rectanglei, rectanglej);
        }
    }
    
//back wheel
    int circlex, circley;
    int circleX = 23;
    int circleY = 52;
    int radius = 8;
    
    for (float circlei = 0; circlei < 2 * pi; circlei = circlei + 0.01) {
        circlex = radius * cos(circlei) + circleX;
        circley = radius * sin(circlei) + circleY;
        w.draw(circlex, circley);
    }

//front wheel
    circleX = 48;
    circleY = 54;
    radius = 6;
    
    for (float circlei = 0; circlei < 2 * pi; circlei = circlei + 0.01) {
        circlex = radius * cos(circlei) + circleX;
        circley = radius * sin(circlei) + circleY;
        w.draw(circlex, circley);
    }

//back window
    int start_x = 15;
    int start_y = 22;
    int end_x = 15;
    int end_y = 35;

    for (int n = start_y; n < end_y; n++) {
        w.draw(start_x, n);
        w.draw(end_x, n);
    }
//front window
    start_x = 30;
    start_y = 22;
    end_x = 30;
    end_y = 35;

    for (int n = start_y; n < end_y; n++) {
        w.draw(start_x, n);
        w.draw(end_x, n);
    }
}
    
    
void traktor::smokeprint() {
    if (smoke == 1) {
            int circlex, circley;
            int circleX = 43;
            int circleY = 18;
            int radius = 4;
    
            for (float circlei = 0; circlei < 2 * pi; circlei = circlei + 0.01) {
                circlex = radius * cos(circlei) + circleX;
                circley = radius * sin(circlei) + circleY;
                w.draw(circlex, circley);
            }
            circleX = 35;
            circleY = 10;
            radius = 2;
    
            for (float circlei = 0; circlei < 2 * pi; circlei = circlei + 0.01) {
                circlex = radius * cos(circlei) + circleX;
                circley = radius * sin(circlei) + circleY;
                w.draw(circlex, circley);
            }
            print();
    }
        if (smoke == 0) {
            print();
        }
}