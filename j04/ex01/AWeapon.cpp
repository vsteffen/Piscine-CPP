#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon (void) : _name("NoName"), _apcost(0), _damage(0) {
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	return ;
}

AWeapon::AWeapon ( AWeapon const & src ) {
	*this = src;
	return ;
}

AWeapon::~AWeapon( void ) {
	return ;
}

AWeapon &		AWeapon::operator=( AWeapon const  & rhs ) {
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}

std::string	const &		AWeapon::getName(void) const {
	return this->_name;
}

int						AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int 					AWeapon::getDamage(void) const {
	return this->_damage;
}
