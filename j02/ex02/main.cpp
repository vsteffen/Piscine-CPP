#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(10);
	Fixed d(42);
	Fixed e(42);

	std::cout << std::endl << "Test 1" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl << "Test 2" << std::endl;

	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl << "Test 3" << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;

	std::cout << std::endl << "Test 4" << std::endl;

	std::cout << c+d << std::endl;
	std::cout << c-d << std::endl;

	std::cout << std::endl << "Test 5" << std::endl;

	std::cout << c*d << std::endl;
	std::cout << d/c << std::endl;

	std::cout << std::endl << "Test 6" << std::endl;

	(c<d) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
	(c>d) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;

	std::cout << std::endl << "Test 7" << std::endl;

	(c<=d) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
	(c>=d) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
	(d>=e) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
	(d<=e) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;

	std::cout << std::endl << "Test 8" << std::endl;

	(c==d) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
	(d==e) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
	(c!=d) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
	(d!=e) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;

	return 0;
}
