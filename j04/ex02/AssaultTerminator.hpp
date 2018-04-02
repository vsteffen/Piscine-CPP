#ifndef ASSAULTTERMINATOR_CLASS_H
# define ASSAULTTERMINATOR_CLASS_H

# include <iostream>

class	AssaultTerminator : public ISpaceMarine  {

public:
	AssaultTerminator( void );
	AssaultTerminator( int const n);
	AssaultTerminator( AssaultTerminator const & src );
	~AssaultTerminator( void );

	AssaultTerminator & operator=( AssaultTerminator const & rhs);

	int		getFoo( void ) const ;
	void	setFoo( int const foo );

private:
	int		_foo;

};

std::ostream &		operator<<( std::ostream & o, AssaultTerminator const & i );

#endif
