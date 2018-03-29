#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap (void) {
	this->_name = std::string("NoName");
	std::cout << "NinjaTrap <" << this->_name << "> \"Let's get this party started!\"" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDmg = 20;
	this->_rangedAttackDmg = 15;
	this->_armorDmgRed = 3;
	return ;
}

NinjaTrap::NinjaTrap( std::string name ) {
	this->_name = name;
	std::cout << "NinjaTrap <" << this->_name << "> \"Let's get this party started!\"" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDmg = 20;
	this->_rangedAttackDmg = 15;
	this->_armorDmgRed = 3;
	return ;
}

NinjaTrap::NinjaTrap ( NinjaTrap const & src ) {
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << "NinjaTrap <" << this->_name << "> \"I'll die the way I lived: annoying!\"" << std::endl;
	return ;
}

void			NinjaTrap::danceBattleChallenge(std::string const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> \"" << "Dance battle! Or, you know... regular battle." << "\"" << std::endl;
	std::cout << "NinjaTrap <" << this->_name << "> challenges <" << target << "> for a dance battle challenge!" << std::endl;
	return ;
}

void			NinjaTrap::shootPacificCreaturesChallenge(std::string const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> \"" << "You versus me! Me versus you! Either way!" << "\"" << std::endl;
	std::cout << "NinjaTrap <" << this->_name << "> challenges <" << target << "> for a contest to shoot pacific creatures!" << std::endl;
	return ;
}

void			NinjaTrap::rollFasterChallenge(std::string const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> \"" << "I'm on a roll!" << "\"" << std::endl;
	std::cout << "NinjaTrap <" << this->_name << "> challenges <" << target << "> for a contest to roll faster!" << std::endl;
	return ;
}

void			NinjaTrap::jokeContestChallenge(std::string const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> \"" << "Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!" << "\"" << std::endl;
	std::cout << "NinjaTrap <" << this->_name << "> challenges <" << target << "> for a joke contest!" << std::endl;
	return ;
}

void			NinjaTrap::rallyDeathValleyChallenge(std::string const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> \"" << "I don't know how much longer I can hold on!" << "\"" << std::endl;
	std::cout << "NinjaTrap <" << this->_name << "> challenges <" << target << "> for a race in death valley!" << std::endl;
	return ;
}

void			NinjaTrap::challengeNewcomer(std::string const & target) {
	typedef	void	(NinjaTrap::*Challenge)( std::string const & target ) const;
	Challenge		challenge[5] = {
		&NinjaTrap::danceBattleChallenge,
		&NinjaTrap::shootPacificCreaturesChallenge,
		&NinjaTrap::rollFasterChallenge,
		&NinjaTrap::jokeContestChallenge,
		&NinjaTrap::rallyDeathValleyChallenge,
	};
	int max = 4, min = 0;
	int randChallenge = rand()%(max-min + 1) + min;

	return (this->*challenge[randChallenge])(target);
}
