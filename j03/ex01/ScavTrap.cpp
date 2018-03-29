#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void) : _name( std::string("NoName") ) {
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

ScavTrap::ScavTrap( std::string name ) : _name( name ) {
	std::cout << "ScavTrap <" << this->_name << "> \"Let's get this party started!\"" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDmg = 30;
	this->_rangedAttackDmg = 20;
	this->_armorDmgRed = 5;
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

unsigned int	ScavTrap::rangedAttack(std::string const & target) const {
	std::cout << "ScavTrap <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDmg << "> points of damage !" << std::endl;
	return this->_rangedAttackDmg;
}

unsigned int	ScavTrap::meleeAttack(std::string const & target) const {
	std::cout << "ScavTrap <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return this->_meleeAttackDmg;
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

void	ScavTrap::takeDamage(unsigned int amount) {
	if (amount > this->_armorDmgRed) {
		amount -= this->_armorDmgRed;
		if (amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		// std::cout << "ScavTrap <" << this->_name << "> \"My robotic flesh! AAHH!\"" << std::endl;
		std::cout << "ScavTrap <" << this->_name << "> take <" << amount << "> damage, current HP <" << this->_hitPoints << "/" << this->_maxHitPoints << ">!" << std::endl;
		return ;
	}
	// std::cout << "ScavTrap <" << this->_name << "> \"I am so impressed with myself!\"" << std::endl;
	// std::cout << "ScavTrap <" << this->_name << "> block attack!" << std::endl;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	// std::cout << "ScavTrap <" << this->_name << "> \"Hit me, baby!\"" << std::endl;
	if (amount + this->_hitPoints >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
	std::cout << "ScavTrap <" << this->_name << "> repaired <" << amount << ">, current HP <" << this->_hitPoints << "/" << this->_maxHitPoints << ">!" << std::endl;
	return ;
}

void	ScavTrap::setName(std::string name) {
	this->_name = name;
}

void	ScavTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
}

void	ScavTrap::setMaxHitPoints(unsigned int maxHitPoints) {
	this->_maxHitPoints = maxHitPoints;
}

void	ScavTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
}

void	ScavTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints) {
	this->_maxEnergyPoints = maxEnergyPoints;
}

void	ScavTrap::setLevel(unsigned int level) {
	this->_level = level;
}

void	ScavTrap::setMeleeAttackDmg(unsigned int meleeAttackDmg) {
	this->_meleeAttackDmg = meleeAttackDmg;
}

void	ScavTrap::setRangedAttackDmg(unsigned int rangedAttackDmg) {
	this->_rangedAttackDmg = rangedAttackDmg;
}

void	ScavTrap::setArmorDmgRed(unsigned int armorDmgRed) {
	this->_armorDmgRed = armorDmgRed;
}


std::string		ScavTrap::getName( void ) const {
	return this->_name;
}

unsigned int	ScavTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

unsigned int	ScavTrap::getMaxHitPoints( void ) const {
	return this->_maxHitPoints;
}

unsigned int	ScavTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

unsigned int	ScavTrap::getMaxEnergyPoints( void ) const {
	return this->_maxEnergyPoints;
}

unsigned int	ScavTrap::getLevel( void ) const {
	return this->_level;
}

unsigned int	ScavTrap::getMeleeAttackDmg( void ) const {
	return this->_meleeAttackDmg;
}

unsigned int	ScavTrap::getRangedAttackDmg( void ) const {
	return this->_rangedAttackDmg;
}

unsigned int	ScavTrap::getArmorDmgRed( void ) const {
	return this->_armorDmgRed;
}


ScavTrap &		ScavTrap::operator=( ScavTrap const  & rhs ) {
	if ( this != &rhs )
		this->_name = rhs.getName();
	return *this;
}
