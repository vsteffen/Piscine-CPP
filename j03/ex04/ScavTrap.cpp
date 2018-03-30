#include <iostream>
#include "ScavTrap.hpp"


ScavTrap::ScavTrap (void) {
	this->_name = std::string("NoName");
	std::cout << "ScavTrap <" << this->_name << "> \"Let's get this party started!\"" << std::endl;
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

ScavTrap::ScavTrap( std::string name ) {
	this->_name = name;
	std::cout << "ScavTrap <" << this->_name << "> \"Let's get this party started!\"" << std::endl;
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

ScavTrap::ScavTrap ( ScavTrap const & src ) {
	*this = src;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap <" << this->_name << "> \"I'll die the way I lived: annoying!\"" << std::endl;
	return ;
}

void			ScavTrap::danceBattleChallenge(std::string const & target) const {
	std::cout << "ScavTrap <" << this->_name << "> \"" << "Dance battle! Or, you know... regular battle." << "\"" << std::endl;
	std::cout << "ScavTrap <" << this->_name << "> challenges <" << target << "> for a dance battle challenge!" << std::endl;
	return ;
}

void			ScavTrap::shootPacificCreaturesChallenge(std::string const & target) const {
	std::cout << "ScavTrap <" << this->_name << "> \"" << "You versus me! Me versus you! Either way!" << "\"" << std::endl;
	std::cout << "ScavTrap <" << this->_name << "> challenges <" << target << "> for a contest to shoot pacific creatures!" << std::endl;
	return ;
}

void			ScavTrap::rollFasterChallenge(std::string const & target) const {
	std::cout << "ScavTrap <" << this->_name << "> \"" << "I'm on a roll!" << "\"" << std::endl;
	std::cout << "ScavTrap <" << this->_name << "> challenges <" << target << "> for a contest to roll faster!" << std::endl;
	return ;
}

void			ScavTrap::jokeContestChallenge(std::string const & target) const {
	std::cout << "ScavTrap <" << this->_name << "> \"" << "Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!" << "\"" << std::endl;
	std::cout << "ScavTrap <" << this->_name << "> challenges <" << target << "> for a joke contest!" << std::endl;
	return ;
}

void			ScavTrap::rallyDeathValleyChallenge(std::string const & target) const {
	std::cout << "ScavTrap <" << this->_name << "> \"" << "I don't know how much longer I can hold on!" << "\"" << std::endl;
	std::cout << "ScavTrap <" << this->_name << "> challenges <" << target << "> for a race in death valley!" << std::endl;
	return ;
}

void			ScavTrap::challengeNewcomer(std::string const & target) {
	typedef	void	(ScavTrap::*Challenge)( std::string const & target ) const;
	Challenge		challenge[5] = {
		&ScavTrap::danceBattleChallenge,
		&ScavTrap::shootPacificCreaturesChallenge,
		&ScavTrap::rollFasterChallenge,
		&ScavTrap::jokeContestChallenge,
		&ScavTrap::rallyDeathValleyChallenge,
	};
	int max = 4, min = 0;
	int randChallenge = rand()%(max-min + 1) + min;

	return (this->*challenge[randChallenge])(target);
}

ScavTrap &		ScavTrap::operator=( ScavTrap const  & rhs ) {
	if ( this != &rhs ) {
		this->_hitPoints = rhs.getHitPoints();
		this->_maxHitPoints = rhs.getMaxHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
		this->_level = rhs.getLevel();
		this->_meleeAttackDmg = rhs.getMeleeAttackDmg();
		this->_rangedAttackDmg = rhs.getRangedAttackDmg();
		this->_armorDmgRed = rhs.getArmorDmgRed();
	}
	return *this;
}
