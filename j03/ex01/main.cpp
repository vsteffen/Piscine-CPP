#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap		bobby("Bobby");
	FragTrap		jacquie("Jacquie");

	std::cout << std::endl;

	bobby.takeDamage(jacquie.meleeAttack("bobby"));
	jacquie.beRepaired(5);
	bobby.takeDamage(jacquie.rangedAttack("bobby"));
	jacquie.beRepaired(1000);

	std::cout << std::endl;

	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));
	jacquie.takeDamage(bobby.vaulthunter_dot_exe("Jacquie"));

	std::cout << std::endl;

	bobby.takeDamage(3000);

	std::cout << std::endl;
	std::cout << "+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	std::cout << std::endl;

	ScavTrap		gertrude("Gertrude");
	ScavTrap		morris("Morris");

	std::cout << std::endl;

	gertrude.takeDamage(morris.meleeAttack("Gertrude"));
	morris.beRepaired(5);
	gertrude.takeDamage(morris.rangedAttack("Gertrude"));
	morris.beRepaired(1000);

	std::cout << std::endl;

	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");
	gertrude.challengeNewcomer("Morris");

	std::cout << std::endl;

	gertrude.takeDamage(3000);

	std::cout << std::endl;
	return 0;
}
