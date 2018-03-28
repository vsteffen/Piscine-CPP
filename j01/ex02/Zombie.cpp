#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie is born" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie is died" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss..." << std::endl;
}
