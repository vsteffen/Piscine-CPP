#ifndef CANONIC_CLASS_H
# define CANONIC_CLASS_H

# include <iostream>

class	Fixed {

public:
	Canonic( void );
	Canonic( int const n);
	Canonic( Canonic const & src );
	~Canonic( void );

	Canonic & operator=( Canonic const & rhs);

	int		getFoo( void ) const ;
	void	setFoo( int const foo );

private:
	int		_foo;

};

std::ostream &		operator<<( std::ostream & o, Canonic const & i );

#endif
