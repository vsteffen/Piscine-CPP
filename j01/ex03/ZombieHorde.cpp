#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(void) {
	srand(time(NULL));
}

ZombieHorde::~ZombieHorde(void) {
}

void		ZombieHorde::setZombieType(std::string type) {
	ZombieHorde::type = type;
	return ;
}

Zombie* 	ZombieHorde::newZombie(std::string name) {
	Zombie	*zombie = new Zombie;

	zombie->name = name;
	zombie->type = ZombieHorde::type;
	zombie->annonce();
	return zombie;
}

void	ZombieHorde::randomChump() const {
	std::string name[5] = {"Gusher", "Mourner", "Snacker", "Stinker", "Puker"};
	int max = 4, min = 0;
	int randNum = rand()%(max-min + 1) + min;

	Zombie	zombie;
	zombie.name = name[randNum];
	zombie.type = ZombieHorde::type;
	zombie.annonce();
}

std::string		ZombieHorde::type = std::string("default");
