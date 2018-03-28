#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed (void) : _fpv( 0 ) {
	std::cout << "Default constructor called" << std::endl;
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

Fixed &		Fixed::operator=( Fixed const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_fpv = rhs.getRawBits();
	return *this;
}


int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpv;
}

void	Fixed::setRawBits(int rawBits) {
	this->_fpv = rawBits;
	return ;
}

const int	Fixed::_fb = 8;
