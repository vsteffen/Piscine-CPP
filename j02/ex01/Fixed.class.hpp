#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class	Fixed {

public:
	Fixed( void );
	Fixed( int const n);
	Fixed( float const f);
	Fixed( Fixed const & src );
	~Fixed( void );

	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed & operator=( Fixed const & rhs);

	int		getRawBits( void ) const;
	void	setRawBits( int const rawBits );

private:
	int					_rawBits;
	static const int	_fp;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
