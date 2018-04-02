#ifndef TACTICALMARINE_CLASS_H
# define TACTICALMARINE_CLASS_H

# include <iostream>

class	TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine( void );
	TacticalMarine( int const n);
	TacticalMarine( TacticalMarine const & src );
	~TacticalMarine( void );

	TacticalMarine & operator=( TacticalMarine const & rhs);

	int		getFoo( void ) const ;
	void	setFoo( int const foo );

private:
	int		_foo;

};

std::ostream &		operator<<( std::ostream & o, TacticalMarine const & i );

#endif
