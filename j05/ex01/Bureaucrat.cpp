#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat (void) : _name( "NoName" ), _grade( 150 ) {
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	if (grade < 1)	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat ( Bureaucrat const & src ) {
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
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
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
	return ;
}
void			Bureaucrat::decreaseGrade(void) {
	if (this->_grade >= 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade++;
	return ;
}

Bureaucrat &		Bureaucrat::operator=( Bureaucrat const  & rhs ) {
	if ( this != &rhs ) {
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i) {
	o << "<" << i.getName() << ">, bureaucrat grade <" << i.getGrade() << ">" << std::endl;
	return o;
}



// GradeTooLowException

Bureaucrat::GradeTooLowException::GradeTooLowException( void ) {
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src ) {
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw() {
	return ;
}

Bureaucrat::GradeTooLowException & 		Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & rhs) {
	return *this;
}

const char * 	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Your grade is too low to decrease your grade!");
}


// GradeTooHighException

Bureaucrat::GradeTooHighException::GradeTooHighException( void ) {
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( Bureaucrat::GradeTooHighException const & src ) {
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw() {
	return ;
}

Bureaucrat::GradeTooHighException &		Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & rhs) {
	return *this;
}

const char * 	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Your grade is too high to raise your grade!");
}
