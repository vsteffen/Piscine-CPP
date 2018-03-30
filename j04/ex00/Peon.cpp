#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

Peon::Peon (void) : Victim("NoName") {
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon( std::string name ) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon ( Peon const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Peon::~Peon( void ) {
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon &		Peon::operator=( Peon const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_name = rhs.getName();
	return *this;
}

void			Peon::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
