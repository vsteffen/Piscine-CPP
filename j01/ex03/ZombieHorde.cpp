#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N) {
	std::cout << "ZombieHorde created" << std::endl;

	std::string name[10] = {"Gusher", "Mourner", "Snacker", "Stinker", "Puker", "Cracker", "Clicker", "Splasher", "Freak", "Sweller"};
	srand(time(NULL));
	int max = 4, min = 0;
	this->_zombie = new Zombie[N];
	this->_N = N;

	for (int i = 0; i < N; i++) {
		int randNum = rand()%(max-min + 1) + min;
		this->_zombie[i].name = name[randNum];
		this->_zombie[i].type = std::string("Horde");
	}
}

void	ZombieHorde::announce(void) const {
	for (int i = 0; i < this->_N; i++) {
		this->_zombie[i].announce();
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete []this->_zombie ;
	std::cout << "ZombieHorde destroyed" << std::endl;
}
