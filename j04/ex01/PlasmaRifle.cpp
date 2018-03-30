#include <iostream>
#include "PlasmaRifle.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle (void) : AWeapon("Plasma Rifle", 5, 21) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) {
	std::cout << "Parametric constructor called" << std::endl;
	this->_name = "Plasma Rifle";
	this->_apcost = 5;
	this->_damage = 21;
	return ;
}

PlasmaRifle::PlasmaRifle ( PlasmaRifle const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

PlasmaRifle &		PlasmaRifle::operator=( PlasmaRifle const  & rhs ) {
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
