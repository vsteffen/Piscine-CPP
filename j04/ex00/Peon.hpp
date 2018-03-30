#ifndef PEON_CLASS_H
# define PEON_CLASS_H

# include <iostream>
# include "Victim.hpp"

class	Peon : public Victim {

public:
	Peon( void );
	Peon( std::string name );
	Peon( Peon const & src );
	~Peon( void );

	Peon & operator=( Peon const & rhs);

	virtual void	getPolymorphed( void ) const;
};

#endif
