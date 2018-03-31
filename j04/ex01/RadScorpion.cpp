#include <iostream>
#include "Enemy.hpp"
#include "RadScorpion.hpp"

RadScorpion::RadScorpion (void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : Enemy(hp, type) {
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion ( RadScorpion const & src ) : Enemy(src._hp, src._type) {
	// *this = src;
	return ;
}

RadScorpion::~RadScorpion( void ) {
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}
