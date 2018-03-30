#include <iostream>
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap (void) {
	this->_name = std::string("NoName");
	std::cout << "SuperTrap <" << this->_name << "> \"Glitching weirdness is a term of endearment, right?\"" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDmg = 60;
	this->_rangedAttackDmg = 20;
	this->_armorDmgRed = 0;
	return ;
}

SuperTrap::SuperTrap( std::string name ) {
	this->_name = name;
	std::cout << "SuperTrap <" << this->_name << "> \"Glitching weirdness is a term of endearment, right?\"" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDmg = 60;
	this->_rangedAttackDmg = 20;
	this->_armorDmgRed = 5;
	return ;
}

SuperTrap::SuperTrap ( SuperTrap const & src ) {
	*this = src;
	return ;
}

SuperTrap::~SuperTrap( void ) {
	std::cout << "SuperTrap <" << this->_name << "> \"Robot down!\"" << std::endl;
	return ;
}

unsigned int	SuperTrap::rangedAttack(std::string const & target) const {
	std::cout << "FragTrap <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDmg << "> points of damage !" << std::endl;
	return this->_rangedAttackDmg;
}

unsigned int	SuperTrap::meleeAttack(std::string const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return this->_meleeAttackDmg;
}
