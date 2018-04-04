#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class	ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm(std::string const _name, int const gradeSign, int const gradeExec);
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	~ShrubberyCreationForm( void );

	virtual void	execute(Bureaucrat const & executor) const;

};

#endif
