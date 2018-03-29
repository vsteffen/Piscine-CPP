#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

Fixed::Fixed (void) : _rawBits( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const n ) : _rawBits( n << Fixed::_fp) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const f ) : _rawBits( roundf(f * (1 << Fixed::_fp)) ) {
	std::cout << "Float constructor called" << std::endl;
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
	return (float)this->_rawBits / (1 << Fixed::_fp);
}

int		Fixed::toInt( void ) const {
	return this->_rawBits / (1 << Fixed::_fp);
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits(int rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = rawBits;
	return ;
}

Fixed &		Fixed::operator=( Fixed const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_rawBits = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return o;
}

const int	Fixed::_fp = 8;
