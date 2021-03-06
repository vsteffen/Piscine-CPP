#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main() {
	srand(time(NULL));

	ClapTrap		morris("Morris");
	FragTrap		bobby("Bobby");
	ScavTrap		jacquie("Jacquie");

	std::cout << std::endl;

	NinjaTrap		gladys("Gladys");

	std::cout << std::endl;

	gladys.ninjaShoebox(morris);
	gladys.ninjaShoebox(bobby);
	gladys.ninjaShoebox(jacquie);
	gladys.ninjaShoebox(gladys);

	return 0;
}
