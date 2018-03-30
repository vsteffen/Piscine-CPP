#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H

# include <iostream>
# include "Victim.hpp"

class	Sorcerer {

private:
	std::string		_name;
	std::string		_title;

public:
	Sorcerer( void );
	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const & src );
	~Sorcerer( void );

	Sorcerer & operator=( Sorcerer const & rhs);

	std::string		getName( void ) const ;
	void			setName( std::string name );
	std::string		getTitle( void ) const ;
	void			setTitle( std::string title );

	void	polymorph(Victim const &) const;
};

std::ostream &		operator<<( std::ostream & o, Sorcerer const & i );

#endif
