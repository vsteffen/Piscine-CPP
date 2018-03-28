#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class	Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed & operator=( Fixed const & rhs);

	int		getRawBits( void ) const;
	void	setRawBits( int const rawBits );

private:
	int					_fpv;
	static const int	_fb;

};

#endif
