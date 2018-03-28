#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {
	std::cout << "Human created" << std::endl;
}

Human::~Human(void) {
	std::cout << "Human destroyed" << std::endl;
}

std::string		Human::identify(void) const {
		return this->_brain.identify();
}

Brain const		&Human::getBrain(void) const {
		return this->_brain;
}
