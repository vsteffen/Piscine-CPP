#include <iostream>
#include "Enemy.hpp"
#include "SuperMutant.hpp"

SuperMutant::SuperMutant (void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant ( SuperMutant const & src ) : Enemy(src._hp, src._type) {
	// *this = src;
	return ;
}

SuperMutant::~SuperMutant( void ) {
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void		SuperMutant::takeDamage(int damage) {
	if (damage < 3)
		Enemy::takeDamage(damage - 3);
	return ;
}
