#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "Var set" << std::endl;
	return ;
}

Sample2::~Sample2(void) {
	std::cout << "Destructor called" << std::endl;
}

Sample3::Sample3(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "Var set" << std::endl;
	return ;
}

Sample3::~Sample3(void) {
	std::cout << "Destructor called" << std::endl;
}
