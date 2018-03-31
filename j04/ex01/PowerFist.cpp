#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist (void) : AWeapon("Power Fist", 8, 50) {
	return ;
}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
	return ;
}

PowerFist::PowerFist ( PowerFist const & src ) : AWeapon(src._name, src._apcost, src._damage) {
	// *this = src;
	return ;
}

PowerFist::~PowerFist( void ) {
	return ;
}

void	PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
