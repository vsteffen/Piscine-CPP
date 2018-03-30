#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H

# include <iostream>

class	Victim {

protected:
	std::string		_name;

public:
	Victim( void );
	Victim( std::string name );
	Victim( Victim const & src );
	~Victim( void );

	Victim & operator=( Victim const & rhs);

	std::string		getName( void ) const ;
	void			setName( std::string name );

	virtual void	getPolymorphed( void ) const;

};

std::ostream &		operator<<( std::ostream & o, Victim const & i );

#endif
