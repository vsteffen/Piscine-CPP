#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "FragTrap.hpp"

int		main() {
	FragTrap		bobby("Bobby");
	FragTrap		jacquie("Jacquie");

	srand(time(NULL));

	bobby.takeDamage(jacquie.meleeAttack("bobby"));
	jacquie.beRepaired(5);
	bobby.takeDamage(jacquie.rangedAttack("bobby"));
	jacquie.beRepaired(1000);

	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));

	bobby.takeDamage(3000);

	return 0;
}
