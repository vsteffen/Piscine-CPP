#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form (void) : _name( "NoName" ), _formSigned(false), _gradeSign( 150 ), _gradeExec( 150 ) {
	return ;
}

Form::Form( std::string name, int gradeSign, int gradeExec ) : _name(name), _formSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (gradeSign < 1 || gradeExec < 1)	{
		throw Form::GradeTooHighException();
	}
	else if (gradeSign > 150 || gradeExec > 150) {
		throw Form::GradeTooLowException();
	}
	return ;
}

Form::Form ( Form const & src ) : _name(src.getName()), _formSigned(src.getFormSigned()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()) {
	return ;
}

Form::~Form( void ) {
	return ;
}

std::string const	Form::getName( void ) const {
	return this->_name;
}

bool				Form::getFormSigned( void ) const {
	return this->_formSigned;
}

int					Form::getGradeSign( void ) const {
	return this->_gradeSign;
}

int					Form::getGradeExec( void ) const {
	return this->_gradeExec;
}


void			Form::beSigned(Bureaucrat const & bureaucrat) {
	int gradeBureaucrat = bureaucrat.getGrade();
	if (gradeBureaucrat > this->_gradeSign) {
		throw Form::GradeTooLowException();
	}
	this->_formSigned = true;
	return ;
}

// void	Form::execute(Bureaucrat const & executor) const {
// 	return ;
// }


Form &		Form::operator=( Form const  & rhs ) {
	if ( this != &rhs ) {
		this->_formSigned = rhs.getFormSigned();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Form const & i) {
	o << "<" << i.getName() << ">, signed <" << i.getFormSigned() << "> form grade to sign it <" << i.getGradeSign() << ">, form grade to execute it <" << i.getGradeExec() << ">" << std::endl;
	return o;
}


// GradeTooLowException

Form::GradeTooLowException::GradeTooLowException( void ) {
	return ;
}

Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src ) {
	(void)src;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw() {
	return ;
}

Form::GradeTooLowException & 		Form::GradeTooLowException::operator=(Form::GradeTooLowException const & rhs) {
	(void)rhs;
	return *this;
}

const char * 	Form::GradeTooLowException::what() const throw() {
	return ("Grade specified is too low to create your form!");
}


// GradeTooHighException

Form::GradeTooHighException::GradeTooHighException( void ) {
	return ;
}

Form::GradeTooHighException::GradeTooHighException( Form::GradeTooHighException const & src ) {
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw() {
	return ;
}

Form::GradeTooHighException &		Form::GradeTooHighException::operator=(Form::GradeTooHighException const & rhs) {
	(void)rhs;
	return *this;
}

const char * 	Form::GradeTooHighException::what() const throw() {
	return ("Grade specified is too high to create your form!");
}
