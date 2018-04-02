#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat (void) : _name( "NoName" ), _grade( 150 ) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Parametric constructor called" << std::endl;
	if (grade < 1)	{
		throw GradeTooHighException.what();
	}
	else if (grade > 150) {
		throw GradeTooLowException.what();
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat ( Bureaucrat const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string const	Bureaucrat::getName( void ) const {
	return this->_name;
}

int				Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void			Bureaucrat::increaseGrade(void) {
	if (this->_grade <= 1) {
		throw GradeTooHighException.what();
	}
	this->_grade--;
	return ;
}
void			Bureaucrat::decreaseGrade(void) {
	if (this->_grade >= 150) {
		throw GradeTooLowException.what();
	}
	this->_grade++;
	return ;
}

Bureaucrat &		Bureaucrat::operator=( Bureaucrat const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs ) {
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i) {
	o << "<" << i.getName() << ">, bureaucrat grade <" << i.getGrade() << ">";
	return o;
}

Bureaucrat::GradeTooLowException( void ) {
	return ;
}

Bureaucrat::GradeTooLowException( GradeTooLowException const & src ) {
	return ;
}

Bureaucrat::~GradeTooLowException( void ) {
	return ;
}

const char * 	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Your grade is too high to raise your grade!");
}

Bureaucrat::GradeToohighException( void ) {
	return ;
}

Bureaucrat::GradeToohighException( GradeToohighException const & src ) {
	return ;
}

Bureaucrat::~GradeToohighException( void ) {
	return ;
}

const char * 	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Your grade is too low to decrease your grade!");
}
