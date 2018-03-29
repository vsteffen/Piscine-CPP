#include <iostream>
#include "FragTrap.class.hpp"

FragTrap::FragTrap (void) : _name( std::string("NoName") ) {
	std::cout << "FrapTrap <" << this->_name << "> \"This time it'll be awesome, I promise!\"" << std::endl;
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

FragTrap::FragTrap( std::string name ) : _name( name ) {
	std::cout << "FrapTrap <" << this->_name << "> \"This time it'll be awesome, I promise!\"" << std::endl;
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

FragTrap::FragTrap ( FragTrap const & src ) {
	*this = src;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FrapTrap <" << this->_name << "> \"I'm too pretty to die!\"" << std::endl;
	return ;
}

unsigned int	FragTrap::rangedAttack(std::string const & target) const {
	std::cout << "FrapTrap <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDmg << "> points of damage !" << std::endl;
	return this->_rangedAttackDmg;
}

unsigned int	FragTrap::meleeAttack(std::string const & target) const {
	std::cout << "FrapTrap <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return this->_meleeAttackDmg;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints < 25 ) {
		// std::cout << "FrapTrap <" << this->_name << "> \"" << "Who needs ammo anyway, am I right?" << "\"" << std::endl;
		std::cout << "FrapTrap <" << this->_name << "> insufficient energy <" << this->_energyPoints << ">, attack require <25> energy points!" << std::endl;
		return 0;
	}
	else {
		this->_energyPoints -= 25;

		int maxQuote = 4, minQuote = 0;
		int randQuote = rand()%(maxQuote-minQuote + 1) + minQuote;
		std::string		quote[5] = {
			"Step right up, to the Bulletnator 9000!",
			"Ha ha ha! Fall before your robot overlord!",
			"This time it'll be awesome, I promise!",
			"Present for you!",
			"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!"
		};
		std::cout << "FrapTrap <" << this->_name << "> \"" << quote[randQuote] << "\"" << std::endl;

		int maxAttack = 1, minAttack = 0;
		int randAttack = rand()%(maxAttack-minAttack + 1) + minAttack;

		if (randAttack == 0)
			return FragTrap::meleeAttack(target);
		else
			return FragTrap::rangedAttack(target);
		return 0;
	}
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (amount > this->_armorDmgRed) {
		amount -= this->_armorDmgRed;
		if (amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		// std::cout << "FrapTrap <" << this->_name << "> \"My robotic flesh! AAHH!\"" << std::endl;
		std::cout << "FrapTrap <" << this->_name << "> take <" << amount << "> damage, current HP <" << this->_hitPoints << "/" << this->_maxHitPoints << ">!" << std::endl;
		return ;
	}
	// std::cout << "FrapTrap <" << this->_name << "> \"I am so impressed with myself!\"" << std::endl;
	std::cout << "FrapTrap <" << this->_name << "> block attack!" << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount) {
	// std::cout << "FrapTrap <" << this->_name << "> \"Hit me, baby!\"" << std::endl;
	if (amount + this->_hitPoints >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
	std::cout << "FrapTrap <" << this->_name << "> repaired <" << amount << ">, current HP <" << this->_hitPoints << "/" << this->_maxHitPoints << ">!" << std::endl;
	return ;
}

void	FragTrap::setName(std::string name) {
	this->_name = name;
}

void	FragTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
}

void	FragTrap::setMaxHitPoints(unsigned int maxHitPoints) {
	this->_maxHitPoints = maxHitPoints;
}

void	FragTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
}

void	FragTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints) {
	this->_maxEnergyPoints = maxEnergyPoints;
}

void	FragTrap::setLevel(unsigned int level) {
	this->_level = level;
}

void	FragTrap::setMeleeAttackDmg(unsigned int meleeAttackDmg) {
	this->_meleeAttackDmg = meleeAttackDmg;
}

void	FragTrap::setRangedAttackDmg(unsigned int rangedAttackDmg) {
	this->_rangedAttackDmg = rangedAttackDmg;
}

void	FragTrap::setArmorDmgRed(unsigned int armorDmgRed) {
	this->_armorDmgRed = armorDmgRed;
}


std::string		FragTrap::getName( void ) const {
	return this->_name;
}

unsigned int	FragTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

unsigned int	FragTrap::getMaxHitPoints( void ) const {
	return this->_maxHitPoints;
}

unsigned int	FragTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

unsigned int	FragTrap::getMaxEnergyPoints( void ) const {
	return this->_maxEnergyPoints;
}

unsigned int	FragTrap::getLevel( void ) const {
	return this->_level;
}

unsigned int	FragTrap::getMeleeAttackDmg( void ) const {
	return this->_meleeAttackDmg;
}

unsigned int	FragTrap::getRangedAttackDmg( void ) const {
	return this->_rangedAttackDmg;
}

unsigned int	FragTrap::getArmorDmgRed( void ) const {
	return this->_armorDmgRed;
}


FragTrap &		FragTrap::operator=( FragTrap const  & rhs ) {
	if ( this != &rhs )
		this->_name = rhs.getName();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, FragTrap const & i) {
	o << "The value of _name is " << i.getName();

	return o;
}
