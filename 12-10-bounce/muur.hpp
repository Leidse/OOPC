// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"
#include "window.hpp"

class muur : public drawable {
private:
   vector end;
   line left;
   line right;
   line top;
   line bottom;
   line left2;
   line right2;
   line top2;
   line bottom2;
   bool fill;
public:
   muur( window & w, const vector & start, const vector & end, bool fill = false);   
   void draw() override;
   void update() override;
};


#endif // RECTANGLE_HPP
