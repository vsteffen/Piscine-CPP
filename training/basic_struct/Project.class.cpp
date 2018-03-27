#include <iostream>
#include "Project.class.hpp"

Project::Project(void) {
	std::cout << "Hello world !" << std::endl;
	this->_nbInst++;
}

Project::~Project(void) {
}

size_t		Project::getNbInst(void) const {
	return this->_nbInst;
}

int			Project::getVar(void) const {
	return this->_var;
}

void		Project::setVar(int var) {
	this->_var = var;
	return ;
}

size_t	Project::_nbInst = 0;
