#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void) {
	ZombieEvent	zombieEvent;
	Zombie		*zombiePtr;

	zombiePtr = zombieEvent.newZombie(std::string("Jaaaj"));
	zombiePtr->announce();
	delete(zombiePtr);

	zombieEvent.randomChump();
	zombieEvent.setZombieType(std::string("Ugly"));
	zombieEvent.randomChump();
	zombieEvent.setZombieType(std::string("One-legged"));
	zombieEvent.randomChump();

	return 0;
}
