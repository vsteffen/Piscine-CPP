#ifndef FORM_CLASS_H
# define FORM_CLASS_H

# include <iostream>
# include "Bureaucrat.hpp"

class	Form {

public:
	Form( void );
	Form(std::string const _name, int const gradeSign, int const gradeExec);
	Form( Form const & src );
	~Form( void );

	Form & operator=( Form const & rhs);

	std::string const	getName( void ) const;
	bool				getFormSigned( void ) const;
	int					getGradeSign( void ) const;
	int					getGradeExec( void ) const;

	class		GradeTooHighException : public std::exception {
		public:
			GradeTooHighException( void );
			GradeTooHighException( GradeTooHighException const & src );
			~GradeTooHighException( void ) throw ();
			GradeTooHighException &	operator=(GradeTooHighException const & rhs);
			virtual const char *what(void) const throw();
	};

	class		GradeTooLowException : public std::exception {
		public:
			GradeTooLowException( void );
			GradeTooLowException( GradeTooLowException const & src );
			~GradeTooLowException( void ) throw();
			GradeTooLowException &	operator=(GradeTooLowException const & rhs);
			virtual const char *what(void) const throw();
	};

	void			beSigned(Bureaucrat const & bureaucrat);
	virtual void	execute(Bureaucrat const & executor) const;

private:
	std::string const	_name;
	bool				_formSigned;
	int const			_gradeSign;
	int const			_gradeExec;

};

std::ostream &		operator<<( std::ostream & o, Form const & i );

#endif
