#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie(void) {
}

void	Zombie::annonce(void) const {
	std::cout << "<" << this->name << " (" << this->type << ")>  Braiiiiiiinnnssss..." << std::endl;
}
