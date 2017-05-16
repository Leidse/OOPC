#ifndef TRAKTOR_HPP
#define TRAKTOR_HPP
#include "window.hpp"

#include "traktor.hpp"

class traktor {
private:
    int smoke;
    window & w;
    
public:
    traktor(window & w, int smoke):
        smoke(smoke),
        w(w)
    {}
    void print();
    void smokeprint();

};

#endif // TRAKTOR_H
