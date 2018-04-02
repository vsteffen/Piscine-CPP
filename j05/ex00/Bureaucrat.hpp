#ifndef BUREAUTCRAT_CLASS_H
# define BUREAUTCRAT_CLASS_H

# include <iostream>

class	Bureaucrat {

public:
	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat & operator=( Bureaucrat const & rhs);

	std::string const	getName( void ) const;
	int					getGrade( void ) const;

	class		GradeTooHighException : public std::exception {
		public:
			GradeTooHighException( void );
			GradeTooHighException( std::string name, int grade );
			GradeTooHighException( GradeTooHighException const & src );
			~GradeTooHighException( void );
			virtual const char *GradeTooHighException(void) const throw();
	};

	class		GradeTooLowException : public std::exception {
		public:
			GradeTooLowException( void );
			GradeTooLowException( std::string name, int grade );
			GradeTooLowException( GradeTooLowException const & src );
			~GradeTooLowException( void );
			virtual const char *what(void) const throw();
	};

	void		increaseGrade(void);
	void		decreaseGrade(void);

private:
	std::string const	_name;
	int					_grade;

};

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i );

#endif
