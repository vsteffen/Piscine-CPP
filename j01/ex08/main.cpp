#include <iostream>
#include "Human.hpp"

int		main(void) {
	Human		human;

	human.action("meleeAttack", "Bobby");
	human.action("unknwown", "Jacquie");
	human.action("rangedAttack", "Jeremy");
	human.action("intimidatingShout", "Durance");
	return 0;
}
