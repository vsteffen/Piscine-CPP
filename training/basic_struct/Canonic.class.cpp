#include <iostream>
#include "Canonic.class.hpp"

Canonic::Canonic (void) : _foo( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Canonic::Canonic( int const n ) _foo( n ) {
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

Canonic::Canonic ( Canonic const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Canonic::~Canonic( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int				Canonic::getFoo( void ) const {
	return this->_foo;
}

void			Canonic::setFoo( int foo ) {
	this->_foo = foo;
	return ;
}

Canonic &		Canonic::operator=( Canonic const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Canonic const & i) {
	o << "The value of _foo is " << i.getFoo();

	return o;
}
