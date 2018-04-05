#include <iostream>
#include "Array.tpp"
#include <string>

int		main( void ) {
	Array<int>			array1(6);
	Array<int>			array2;
	Array<double>		array3(1);

	std::cout << "array1 size: " << array2.getSize() << std::endl;
	std::cout << "array2 size: " << array1.getSize() << std::endl;

	std::cout << std::endl;

	array1[0] = 10;
	array1[3] = 40;
	array1[5] = 60;

	std::cout << "array1[0]: " << array1[0] << std::endl;
	std::cout << "array1[3]: " << array1[3] << std::endl;
	std::cout << "array1[5]: " << array1[5] << std::endl;

	array2 = array1;

	std::cout << "array2[0]: " << array2[0] << std::endl;
	std::cout << "array2[3]: " << array2[3] << std::endl;
	std::cout << "array2[5]: " << array2[5] << std::endl;

	std::cout << std::endl;

	try {
		array1[6] = 60;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	array3[0] = 42.42;
	std::cout << "array3[0]: " << array3[0] << std::endl;

	return (0);
}
