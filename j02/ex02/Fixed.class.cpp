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

Fixed &		Fixed::operator+( Fixed const  & rhs ) const {
	std::cout << "+ operator called" << std::endl;
	Fixed		*add = new Fixed(this->toFloat() + rhs.toFloat());
	return *add;
}

Fixed &		Fixed::operator-( Fixed const  & rhs ) const {
	std::cout << "- operator called" << std::endl;
	Fixed		*less = new Fixed(this->toFloat() - rhs.toFloat());
	return *less;
}

Fixed &		Fixed::operator*( Fixed const  & rhs ) const {
	std::cout << "* operator called" << std::endl;
	Fixed		*multiply = new Fixed(this->toFloat() * rhs.toFloat());
	return *multiply;
}

Fixed &		Fixed::operator/( Fixed const  & rhs ) const {
	std::cout << "/ operator called" << std::endl;
	Fixed		*divide = new Fixed(this->toFloat() / rhs.toFloat());
	return *divide;
}

Fixed &		Fixed::operator++() {
	std::cout << "++operator called" << std::endl;
	this->_rawBits++;
	return *this;
}

Fixed		Fixed::operator++(int) {
	std::cout << "operator++ called" << std::endl;
	Fixed		tmp(*this);
	operator++();
	return tmp;
}

Fixed &		Fixed::operator--() {
	std::cout << "--operator called" << std::endl;
	this->_rawBits--;
	return *this;
}

Fixed		Fixed::operator--(int) {
	std::cout << "operator-- called" << std::endl;
	Fixed		tmp(*this);
	operator--();
	return tmp;
}

bool	Fixed::operator>( Fixed const  & rhs ) const {
	std::cout << "> operator called" << std::endl;
	return (this->_rawBits > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const  & rhs ) const {
	std::cout << "< operator called" << std::endl;
	return (this->_rawBits < rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const  & rhs ) const {
	std::cout << "<= operator called" << std::endl;
	return (this->_rawBits <= rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const  & rhs ) const {
	std::cout << ">= operator called" << std::endl;
	return (this->_rawBits >= rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const  & rhs ) const {
	std::cout << "!= operator called" << std::endl;
	return (this->_rawBits != rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const  & rhs ) const {
	std::cout << "== operator called" << std::endl;
	return (this->_rawBits == rhs.getRawBits());
}


Fixed			Fixed::min( Fixed & lhs, Fixed & rhs ) {
	std::cout << "Min called" << std::endl;
	if (lhs.getRawBits() < rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed			Fixed::max( Fixed & lhs, Fixed & rhs ) {
	std::cout << "Max called" << std::endl;
	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed const 	Fixed::min( Fixed const & lhs, Fixed const & rhs ) {
	std::cout << "Min const called" << std::endl;
	if (lhs.getRawBits() < rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed const 	Fixed::max( Fixed const & lhs, Fixed const & rhs ) {
	std::cout << "Max const called" << std::endl;
	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return o;
}

const int	Fixed::_fp = 8;
