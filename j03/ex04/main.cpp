#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main() {
	srand(time(NULL));

	FragTrap		bobby("Bobby");
	ScavTrap		jacquie("Jacquie");
	NinjaTrap		gladys("Gladys");


	std::cout << std::endl;

	SuperTrap		billy("Billy");

	std::cout << std::endl;

	billy.rangedAttack("Jacquie");
	billy.meleeAttack("Jacquie");
	billy.ninjaShoebox(bobby);

	billy.vaulthunter_dot_exe("Gladys");

	billy.beRepaired(60);
	billy.takeDamage(1000);

	std::cout << std::endl;

	return 0;
}
