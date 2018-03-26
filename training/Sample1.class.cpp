#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float const p3) :  a1(p1), a2(p2), pi(p3) {
	std::cout << "Constructor called" << std::endl;
	// this->a1 = p1;
	// this->a2 = p2;
	// this->a3 = p3;
	this->_nbInst++;
	std::cout << "Var set" << std::endl;
	return ;
}

Sample1::~Sample1(void) {
	std::cout << "Destructor called" << std::endl;
}

void Sample1::bar(void) const {
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->pi = " << this->pi << std::endl;
	// this->a1 = 0; --> impossible
	this->_privateBar();

	return;
}

void	Sample1::setFoo(int p) {
	this->_privateFoo = p;
	std::cout << "_privateFoo set !" << std::endl;
}

int		Sample1::getFoo(void) const {
	std::cout << "_privateFoo get ! --> " << this->_privateFoo << std::endl;
	return this->_privateFoo;
}

int		Sample1::compare(Sample1 * other) const {
	if (this->_privateFoo < other->getFoo())
		return -1;
	else if (this->_privateFoo > other->getFoo())
		return 1;
	return 0;
}

void Sample1::_privateBar(void) const {
	std::cout << "This is a private function !" << std::endl;
	std::cout << "This->_privateFoo = " << this->_privateFoo << std::endl;
	// this->a1 = 0; --> impossible

	return;
}

int		Sample1::getNbInst() {
	return Sample1::_nbInst;
	//this-> impossible
}

int		Sample1::_nbInst = 0;
