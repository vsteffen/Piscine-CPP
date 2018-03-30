#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void) : _name( std::string("NoName") ) {
	std::cout << "ClapTrap <" << this->_name << "> \"Hey everybody! Check out my package!\"" << std::endl;
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

ClapTrap::ClapTrap( std::string name ) : _name( name ) {
	std::cout << "ClapTrap <" << this->_name << "> \"Hey everybody! Check out my package!\"" << std::endl;
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

ClapTrap::ClapTrap ( ClapTrap const & src ) {
	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap <" << this->_name << "> \"I have many regrets!\"" << std::endl;
	return ;
}

unsigned int	ClapTrap::rangedAttack(std::string const & target) const {
	std::cout << "ClapTrap <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDmg << "> points of damage !" << std::endl;
	return this->_rangedAttackDmg;
}

unsigned int	ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << "ClapTrap <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return this->_meleeAttackDmg;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->_armorDmgRed) {
		amount -= this->_armorDmgRed;
		if (amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		// std::cout << "ClapTrap <" << this->_name << "> \"My robotic flesh! AAHH!\"" << std::endl;
		std::cout << "ClapTrap <" << this->_name << "> take <" << amount << "> damage, current HP <" << this->_hitPoints << "/" << this->_maxHitPoints << ">!" << std::endl;
		return ;
	}
	// std::cout << "ClapTrap <" << this->_name << "> \"I am so impressed with myself!\"" << std::endl;
	// std::cout << "ClapTrap <" << this->_name << "> block attack!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	// std::cout << "ClapTrap <" << this->_name << "> \"Hit me, baby!\"" << std::endl;
	if (amount + this->_hitPoints >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
	std::cout << "ClapTrap <" << this->_name << "> repaired <" << amount << ">, current HP <" << this->_hitPoints << "/" << this->_maxHitPoints << ">!" << std::endl;
	return ;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setMaxHitPoints(unsigned int maxHitPoints) {
	this->_maxHitPoints = maxHitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints) {
	this->_maxEnergyPoints = maxEnergyPoints;
}

void	ClapTrap::setLevel(unsigned int level) {
	this->_level = level;
}

void	ClapTrap::setMeleeAttackDmg(unsigned int meleeAttackDmg) {
	this->_meleeAttackDmg = meleeAttackDmg;
}

void	ClapTrap::setRangedAttackDmg(unsigned int rangedAttackDmg) {
	this->_rangedAttackDmg = rangedAttackDmg;
}

void	ClapTrap::setArmorDmgRed(unsigned int armorDmgRed) {
	this->_armorDmgRed = armorDmgRed;
}


std::string		ClapTrap::getName( void ) const {
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

unsigned int	ClapTrap::getMaxHitPoints( void ) const {
	return this->_maxHitPoints;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

unsigned int	ClapTrap::getMaxEnergyPoints( void ) const {
	return this->_maxEnergyPoints;
}

unsigned int	ClapTrap::getLevel( void ) const {
	return this->_level;
}

unsigned int	ClapTrap::getMeleeAttackDmg( void ) const {
	return this->_meleeAttackDmg;
}

unsigned int	ClapTrap::getRangedAttackDmg( void ) const {
	return this->_rangedAttackDmg;
}

unsigned int	ClapTrap::getArmorDmgRed( void ) const {
	return this->_armorDmgRed;
}


ClapTrap &		ClapTrap::operator=( ClapTrap const  & rhs ) {
	if ( this != &rhs )
		this->_name = rhs.getName();
	return *this;
}
