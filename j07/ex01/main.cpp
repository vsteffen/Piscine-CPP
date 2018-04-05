#include <iostream>

template< typename T >
void	iter( T * array, size_t length, void (*func)(T) ) {
	std::cout << "Content of array:" << std::endl;

	for (size_t i = 0; i < length; i++) {
		func(array[i]);
	}

	std::cout << std::endl;
}

template< typename T >
void	print( T var ) {
	std::cout << var << std::endl;
	return ;
}

int		main( void ) {
	int				arrayInt[]		= {1, 2, 3};
	std::string		arrayString[]	= {"Jacquie", "Bobby", "Gertrude"};

	::iter<int>(arrayInt, 3, &::print<int>);
	::iter<std::string>(arrayString, 3, &::print<std::string>);

	return 0;
}
