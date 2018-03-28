#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cout << "HumanA (" << this->_name << ") created armed with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA destroyed" << std::endl;
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
