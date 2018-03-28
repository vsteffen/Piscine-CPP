#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void) {
	ZombieHorde		zombieHorde(5);
	zombieHorde.announce();
	return 0;
}
