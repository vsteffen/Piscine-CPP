#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer (void) : _name("NoName"), _title("NoTitle") {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer ( Sorcerer const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Sorcerer::~Sorcerer( void ) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

std::string		Sorcerer::getName( void ) const {
	return this->_name;
}

void			Sorcerer::setName( std::string name ) {
	this->_name = name;
	return ;
}

std::string		Sorcerer::getTitle( void ) const {
	return this->_title;
}

void			Sorcerer::setTitle( std::string title ) {
	this->_title = title;
	return ;
}

void			Sorcerer::polymorph( Victim const & victim) const {
	victim.getPolymorphed();
	return ;
}


Sorcerer &		Sorcerer::operator=( Sorcerer const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Sorcerer const & i) {
	o << "I am "<< i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
