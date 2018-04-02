#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat		bureaucrat1("Jacquie", 130);
	Bureaucrat		*bureaucrat2;

	try {
		bureaucrat2 = new Bureaucrat("Bobby", 0);
	}
	catch (std::exception & e) {
		return 1;
	}

	return 0;
}
