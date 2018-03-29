#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << "+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;

	ScavTrap		gertrude("Gertrude");
	ScavTrap		morris("Morris");

	gertrude.takeDamage(morris.meleeAttack("Gertrude"));
	morris.beRepaired(5);
	gertrude.takeDamage(morris.rangedAttack("Gertrude"));
	morris.beRepaired(1000);

	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");

	gertrude.takeDamage(3000);

	return 0;
}
