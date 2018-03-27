#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void) {
	Zombie		zombie;
	ZombieEvent	zombieEvent;
	Zombie		*zombiePtr;

	zombiePtr = zombieEvent.newZombie(std::string("Jaaaj"));
	delete(zombiePtr);

	zombieEvent.randomChump();
	zombieEvent.randomChump();
	zombieEvent.setZombieType(std::string("Ugly"));
	zombieEvent.randomChump();
	zombieEvent.randomChump();

	return 0;
}
