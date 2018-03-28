#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) {
	srand(time(NULL));
	std::cout << "ZombieEvent created" << std::endl;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "ZombieEvent died" << std::endl;
}

void		ZombieEvent::setZombieType(std::string type) {
	ZombieEvent::type = type;
	return ;
}

Zombie* 	ZombieEvent::newZombie(std::string name) {
	Zombie	*zombie = new Zombie;

	zombie->name = name;
	zombie->type = ZombieEvent::type;
	return zombie;
}

void	ZombieEvent::randomChump() const {
	std::string name[5] = {"Gusher", "Mourner", "Snacker", "Stinker", "Puker"};
	int max = 4, min = 0;
	int randNum = rand()%(max-min + 1) + min;

	Zombie	zombie;
	zombie.name = name[randNum];
	zombie.type = ZombieEvent::type;
	zombie.announce();
}

std::string		ZombieEvent::type = std::string("default");
