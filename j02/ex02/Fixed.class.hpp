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

	bool	operator>( Fixed const  & rhs ) const;
	bool	operator<( Fixed const  & rhs ) const;
	bool	operator<=( Fixed const  & rhs ) const;
	bool	operator>=( Fixed const  & rhs ) const;
	bool	operator!=( Fixed const  & rhs ) const;
	bool	operator==( Fixed const  & rhs ) const;

	Fixed &		operator+( Fixed const  & rhs ) const;
	Fixed &		operator-( Fixed const  & rhs ) const;
	Fixed &		operator*( Fixed const  & rhs ) const;
	Fixed &		operator/( Fixed const  & rhs ) const;

	Fixed &		operator++();
	Fixed		operator++(int);
	Fixed &		operator--();
	Fixed		operator--(int);

	static Fixed			min( Fixed & lhs, Fixed & rhs );
	static Fixed			max( Fixed & lhs, Fixed & rhs );
	static Fixed const		min( Fixed const & lhs, Fixed const & rhs );
	static Fixed const		max( Fixed const & lhs, Fixed const & rhs );


private:
	int					_rawBits;
	static const int	_fp;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
