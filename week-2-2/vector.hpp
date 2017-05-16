#ifndef VECTOR_HPP
#define VECTOR_HPP

/// @file

/// \brief
/// vector ADT
/// \details
/// This is an ADT that implements vector (fractional) values.
/// The x and y vector values are stored as two (signed) integers.
/// The appropriate constructors and operators are provided.
class vector {
public:
    int x;
    int y;
   /// \brief
   /// constructor from explicit values
   /// \details
   /// This constructor initializes a vector from its x and y value.
   vector( int x, int y):
     x( x ), y( y )
   {}
   
   /// \brief   
   /// compare two vector values
   /// \details
   /// This operator tests for equality. It returns true
   /// if the x and y of both
   /// operands are equal.
   bool operator==( const vector & rhs ) const {
        return ( x == rhs.x ) || ( y == rhs.y );
   }

   /// \brief
   /// output operator for a vector value
   /// \details
   /// This operator << prints a constructor in the format
   /// (x y) where both values are printed as
   /// decimal values.
   friend std::ostream & operator<<( std::ostream & lhs, const vector & rhs ){
      return lhs 
         << "(" 
         << rhs.x 
         << " " 
         << rhs.y
         << ")";
   }
    /// \brief 
    /// adds vectors
    /// \details
    /// This operator + adds 2 vectors together.
    vector operator+(const vector & rhs) const {
        return vector(
            x + rhs.x,
            y + rhs.y
        );
    }
   
   /// \brief   
   /// multiply a vector by an integer
   /// \details
   /// This operator * multiplies a vector with an integer value.
    vector operator*( const int rhs ) const {
        return vector(
            x * rhs,
            y * rhs
        );
   }
   
   /// \brief   
   /// multipls a integer by a vectors
   /// \details
   /// This operator * multiplies an interger value with a vector.
   vector operator*( const vector & rhs ) const {
      return vector( 
            rhs.x * x,      
            rhs.y * x
      );
   }
   
   /// \brief   
   /// add a vector to a vector
   /// \details
   /// This operator += adds a vector to a vector.
   vector & operator+=( const vector & rhs ){
      x = x + rhs.x;
      y = y + rhs.y;
      return *this;
   }
    /// \brief
    /// multiplys a vector with a vector
    /// \details
    /// This operator *= multiplys a vector with a vector.
   vector & operator*=( const vector & rhs ) {
        x = x * rhs.x;
        y = y * rhs.y;
        return *this;
    }
   
};

/// \brief   
/// multipls a integer by a vectors
/// \details
/// This operator * multiplies an interger value with a vector.
vector operator* (const int lhs, const vector & rhs) {
    return vector (
        rhs.x * lhs,
        rhs.y * lhs
    );
    
}

#endif