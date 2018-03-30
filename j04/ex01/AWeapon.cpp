#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon (void) : _name("NoName"), _apcost(0), _damage(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

AWeapon::AWeapon ( AWeapon const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

AWeapon::~AWeapon( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

AWeapon &		AWeapon::operator=( AWeapon const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}

std::string		AWeapon::getName(void) const {
	return this->_name;
}

int				AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int 			AWeapon::getDamage(void) const {
	return this->_damage;
}
