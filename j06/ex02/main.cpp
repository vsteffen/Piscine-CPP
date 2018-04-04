#include <iostream>
// #include "Base.hpp"
#include <ctime>
#include <time.h>


class	Base 					{ public: virtual ~Base( void ) {} };
class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

void		identify_from_reference( Base & p ) {
	A * d = dynamic_cast<A*>(&p);
	if ( d != NULL ) {
		std::cout << "A" << std::endl;
		return ;
	}

	B * e = dynamic_cast<B*>(&p);
	if ( e != NULL ) {
		std::cout << "B" << std::endl;
		return ;
	}

	std::cout << "C" << std::endl;
	return ;
}

void		identify_from_pointer( Base * p ) {
	try {
		(void)dynamic_cast<A&>(*p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch ( std::bad_cast &bc ) {
		try {
			(void)dynamic_cast<B&>(*p);
			std::cout << "B" << std::endl;
		}
		catch ( std::bad_cast &bc ) {
			std::cout << "C" << std::endl;
		}
	}
	return ;
}

Base *		generate(void) {
	int random = rand() % 3;
	if (random == 1) {
		return new A();
	}
	else if (random == 2) {
		return new B();
	}
	return new C();
}

int 		main(void)
{
	srand(time(NULL));

	Base * baseRand = generate();

	identify_from_pointer(baseRand);
	identify_from_reference(*baseRand);

	return 0;
}
