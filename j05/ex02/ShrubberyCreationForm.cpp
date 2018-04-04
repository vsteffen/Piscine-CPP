#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (void) : _name( "ShrubberyCreationForm" ), _formSigned(false), _gradeSign( 150 ), _gradeExec( 150 ) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name, int gradeSign, int gradeExec ) : _name(name), _formSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (gradeSign < 1 || gradeExec < 1)	{
		throw ShrubberyCreationForm::GradeTooHighException();
	}
	else if (gradeSign > 150 || gradeExec > 150) {
		throw ShrubberyCreationForm::GradeTooLowException();
	}
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm ( ShrubberyCreationForm const & src ) : _name(src.getName()), _formSigned(src.getShrubberyCreationFormSigned()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	return ;
}

void	Form::execute(Bureaucrat const & executor) const {
	return ;
}


ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const  & rhs ) {
	if ( this != &rhs ) {
		this->_formSigned = rhs.getShrubberyCreationFormSigned();
	}
	return *this;
}
