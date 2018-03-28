#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed (void) : _fpv( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const n ) : _fpv( n ) {
	std::cout << "Parametric int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const f ) : _fpv( f ) {
	std::cout << "Parametric float constructor called" << std::endl;
	return ;
}

Fixed::Fixed ( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

float	Fixed::toFloat( void ) const {
	float f = 0;
	return f;
}

int		Fixed::toInt( void ) const {
	int i = 0;
	return i;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	// std::cout << this->_fpv << std::endl;
	return this->_fpv;
}

void	Fixed::setRawBits(int rawBits) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fpv = rawBits;
	return ;
}

Fixed &		Fixed::operator=( Fixed const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_fpv = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i) {
	o << i.getRawBits();
	return o;
}

const int	Fixed::_fb = 8;
