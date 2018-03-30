#include <iostream>
#include "Victim.hpp"

Victim::Victim (void) : _name("NoName") {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::Victim( std::string name ) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::Victim ( Victim const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Victim::~Victim( void ) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

std::string		Victim::getName( void ) const {
	return this->_name;
}

void			Victim::setName( std::string name ) {
	this->_name = name;
	return ;
}

void			Victim::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}


Victim &		Victim::operator=( Victim const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_name = rhs.getName();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Victim const & i) {
	o << "I'm " << i.getName() << " and I like otters !" << std::endl;
	return o;
}
