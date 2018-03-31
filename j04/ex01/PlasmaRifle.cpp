#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle (void) : AWeapon("Plasma Rifle", 5, 21) {
	return ;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
	return ;
}

PlasmaRifle::PlasmaRifle ( PlasmaRifle const & src ) : AWeapon(src._name, src._apcost, src._damage) {
	// *this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle( void ) {
	return ;
}

void	PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
