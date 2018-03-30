#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap (void) {
	this->_name = std::string("NoName");
	std::cout << "FragTrap <" << this->_name << "> \"This time it'll be awesome, I promise!\"" << std::endl;
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

FragTrap::FragTrap( std::string name ) {
	this->_name = name;
	std::cout << "FragTrap <" << this->_name << "> \"This time it'll be awesome, I promise!\"" << std::endl;
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


unsigned int	FragTrap::cryoAttack(std::string const & target) const {
	std::cout << "FragTrap <" << this->_name << "> \"" << "Freezy peezy!" << "\"" << std::endl;
	std::cout << "FragTrap <" << this->_name << "> attacks <" << target << "> with glacial magic, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return 50;
}

unsigned int	FragTrap::rocketAttack(std::string const & target) const {
	std::cout << "FragTrap <" << this->_name << "> \"" << "Present for you!" << "\"" << std::endl;
	std::cout << "FragTrap <" << this->_name << "> attacks <" << target << "> with a rocket launcher, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return 90;
}

unsigned int	FragTrap::shockAttack(std::string const & target) const {
	std::cout << "FragTrap <" << this->_name << "> \"" << "Shocking, isn't it?" << "\"" << std::endl;
	std::cout << "FragTrap <" << this->_name << "> attacks <" << target << "> with an electric tonfa, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return 80;
}

unsigned int	FragTrap::fireAttack(std::string const & target) const {
	std::cout << "FragTrap <" << this->_name << "> \"" << "Burn, baby, burn!" << "\"" << std::endl;
	std::cout << "FragTrap <" << this->_name << "> attacks <" << target << "> with a flamethrower, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return 60;
}

unsigned int	FragTrap::sniperAttack(std::string const & target) const {
	std::cout << "FragTrap <" << this->_name << "> \"" << "In yo' FACE!" << "\"" << std::endl;
	std::cout << "FragTrap <" << this->_name << "> attacks <" << target << "> with a sniper, causing <" << this->_meleeAttackDmg << "> points of damage !" << std::endl;
	return 70;
}


unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints < 25 ) {
		// std::cout << "FragTrap <" << this->_name << "> \"" << "Who needs ammo anyway, am I right?" << "\"" << std::endl;
		std::cout << "FragTrap <" << this->_name << "> insufficient energy <" << this->_energyPoints << ">, attack require <25> energy points!" << std::endl;
		return 0;
	}
	else {
		this->_energyPoints -= 25;

		typedef	unsigned int	(FragTrap::*SpecialAttacks)( std::string const & target ) const;
		SpecialAttacks		specialAttacks[5] = {
			&FragTrap::cryoAttack,
			&FragTrap::rocketAttack,
			&FragTrap::shockAttack,
			&FragTrap::fireAttack,
			&FragTrap::sniperAttack,
		};
		int max = 4, min = 0;
		int randAttack = rand()%(max-min + 1) + min;

		return (this->*specialAttacks[randAttack])(target);
	}
}


FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap <" << this->_name << "> \"I'm too pretty to die!\"" << std::endl;
	return ;
}

FragTrap &		FragTrap::operator=( FragTrap const  & rhs ) {
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
