#include <iostream>
#include "Human.hpp"

Human::Human(void) {
	std::cout << "Human created" << std::endl;
}

Human::~Human(void) {
	std::cout << "Human destroyed" << std::endl;
}

void	Human::meleeAttack(std::string const & target) {
	std::cout << "Human use melee attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "Human use ranged attack on " << target << std::endl;
}
void	Human::intimidatingShout(std::string const & target) {
	std::cout << "Human use intimidating shout on " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target) {
	typedef	void	(Human::*Actions)( std::string const & target );
	Actions		actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	std::string actionsNameArray[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	for (int i = 0; i < 3; i++) {
	     if (actionsNameArray[i] == action_name)
	     {
	         (this->*actions[i])(target);
	         break;
	     }
	 }
}
