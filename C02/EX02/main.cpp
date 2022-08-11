#include "Fixed.Class.hpp"


int main( void ) 
{
    // Fixed a;
    // Fixed b = Fixed( 100 );
    // Fixed const c( 10 );
    // Fixed const d( b );

    // a = Fixed( 1234.4321f );

    // Fixed const e(b + c);
    // Fixed const r(c - b);
    
    // b = b / c;


    // std::cout << "e = " << e << std::endl;
    // std::cout << "r = " << r << std::endl;
    // std::cout << "b = " << b.getRawBits() << std::endl;
    // std::cout << "b = " << b << std::endl;

    // return 0;

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;

}