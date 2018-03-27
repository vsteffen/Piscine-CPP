#include <iostream>
#include "Pony.hpp"

Pony::Pony(void) {
	std::cout << "A pony is born." << std::endl;
	this->nature = "normal";
}

Pony::~Pony(void) {
	std::cout << "A pony (" << this->nature << ") is dead." << std::endl;
}
