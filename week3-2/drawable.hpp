#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

#include <ostream>
#include "window.hpp"
#include "vector.hpp"

class drawable {
protected:
   window w;
   vector location;
   vector size;
public:
   drawable( window & w, const vector & location, const vector & size );   
   bool overlaps( const drawable & other );
   virtual void draw() = 0;
   virtual void update(){}
   virtual void interact( drawable & other ){}
   
    vector operator*( const vector & rhs ) const {
    return vector( 
        rhs.x * x,      
        rhs.y * y
      );
   }
   
   std::ostream & print( std::ostream & out ) const;
};

std::ostream & operator<<( std::ostream & lhs, const drawable & rhs );

#endif // DRAWABLE_HPP
