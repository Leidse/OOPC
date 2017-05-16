#include "ostream"
#include "vector.hpp"

// needed to get Catch working with MinGW
#define TWOBLUECUBES_CATCH_REPORTER_JUNIT_HPP_INCLUDED
namespace Catch{ class JunitReporter{ ~JunitReporter(); }; };

#include "catch_with_main.hpp"

TEST_CASE( "add a vector") {
    vector v(3, 4);
    vector x = v + vector (5, 3);
    std::stringstream s;
    s << x;    
    REQUIRE(s.str() == "(8 7)");
}

TEST_CASE( "add a vector to the same vector") {
    vector v(2, 3);
    vector x = (v += vector (4, 5));
    std::stringstream s;
    s << x;   
    REQUIRE(s.str() == "(6 8)");
}

TEST_CASE( "multiply a int by an vector" ) {
    vector v(6, 4);
    vector x = 6 * v;
    std::stringstream s;
    s << x;   
    REQUIRE(s.str() == "(36 24)");
}

TEST_CASE( "multiply a vector by an int") {
    vector v(8, 3);
    vector x = v * 5;
    std::stringstream s;
    s << x;
    REQUIRE(s.str() == "(40 15)");
}

TEST_CASE( "the inproduct of 2 vectors to one of the vectors") {
    vector v(4, 1);
    vector x = (v *= vector (7, 2));
    std::stringstream s;
    s << x;
    REQUIRE(s.str() == "(28 2)");
}

TEST_CASE( "constructor, two_parameters" ) {
   vector v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "(3 4)" );   
}