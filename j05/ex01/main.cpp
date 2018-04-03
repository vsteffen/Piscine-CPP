#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat		bureaucrat1("Jacquie", 130);
	Bureaucrat		*bureaucrat2;

	try {
		bureaucrat2 = new Bureaucrat("Bobby", 0);
	}
	catch (std::exception & e) {
		std::cout << "Exception catch on grade too high bureaucrat2" << std::endl;
	}

	try {
		bureaucrat2 = new Bureaucrat("Bobby", 185);
	}
	catch (std::exception & e) {
		std::cout << "Exception catch on grade too low bureaucrat2" << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat 		bureaucrat3("Morris", 2);
		std::cout << bureaucrat3;
		bureaucrat3.increaseGrade();
		std::cout << bureaucrat3;
		bureaucrat3.increaseGrade();
		std::cout << bureaucrat3;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		// std::cout << "Exception catch on grade too high 2" << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat 		bureaucrat4("Gertrude", 149);
		std::cout << bureaucrat4;
		bureaucrat4.decreaseGrade();
		std::cout << bureaucrat4;
		bureaucrat4.decreaseGrade();
		std::cout << bureaucrat4;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		// std::cout << "Exception catch on grade too low 2" << std::endl;
	}

	return 0;
}
