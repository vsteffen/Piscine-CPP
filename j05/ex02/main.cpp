#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Form 		*formPtr;

	try {
		formPtr = new Form("Complicated contract", 200, 150);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		formPtr = new Form("Complicated contract", -5, 150);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		formPtr = new Form("Complicated contract", 100, 200);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		formPtr = new Form("Complicated contract", 100, 0);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl;

	Form		form2("Simple contract", 130, 150);
	Bureaucrat	bureaucrat("Jacquie", 130);


	std::cout << bureaucrat;
	std::cout << form2;
	form2.beSigned(bureaucrat);
	std::cout << form2;

	std::cout << std::endl;

	Form		form3("Complicated contract", 130, 150);

	std::cout << bureaucrat;
	std::cout << form2;
	bureaucrat.signForm(form3);
	std::cout << form2;

	std::cout << std::endl;

	Form		form4("High contract", 1, 150);
	Bureaucrat	bureaucrat1("Intern", 149);

	std::cout << bureaucrat1;
	std::cout << form4;
	bureaucrat1.signForm(form4);
	std::cout << form4;

	return 0;
}
