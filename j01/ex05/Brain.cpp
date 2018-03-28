#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain destroyed" << std::endl;
}

std::string		Brain::identify(void) const {
	std::stringstream 		memory;
	memory << this;
	return memory.str();
}
