#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB (" << this->_name << ") created " << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB destroyed" << std::endl;
}

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	std::cout << this->_name << " armed with " << this->_weapon->getType() << std::endl;
}
