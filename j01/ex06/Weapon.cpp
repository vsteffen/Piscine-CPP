#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon destroyed" << std::endl;
}

std::string const	&Weapon::getType(void) const {
	return this->_type;
}

void				Weapon::setType(std::string type) {
	this->_type = type;
}
