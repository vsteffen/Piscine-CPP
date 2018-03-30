#include <iostream>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap (void) {
	this->_name = std::string("NoName");
	std::cout << "NinjaTrap <" << this->_name << "> \"Let's get this party started!\"" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDmg = 60;
	this->_rangedAttackDmg = 5;
	this->_armorDmgRed = 0;
	return ;
}

NinjaTrap::NinjaTrap( std::string name ) {
	this->_name = name;
	std::cout << "NinjaTrap <" << this->_name << "> \"Let's get this party started!\"" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDmg = 60;
	this->_rangedAttackDmg = 5;
	this->_armorDmgRed = 0;
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

void			NinjaTrap::ninjaShoebox(ClapTrap const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> offer his.her shoe box to " << target.getName() << " (ClapTrap)!" << std::endl;
	std::cout << "ClapTrap <" << target.getName() << "> \"Disgusting. I love it!\"" << std::endl;
	return ;
}

void			NinjaTrap::ninjaShoebox(FragTrap const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> offer his.her shoe box to " << target.getName() << " (FragTrap)!" << std::endl;
	std::cout << "FragTrap <" << target.getName() << "> \"Eww! Cool.\"" << std::endl;
	return ;
}

void			NinjaTrap::ninjaShoebox(ScavTrap const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> offer his.her shoe box to " << target.getName() << " (ScavTrap)!" << std::endl;
	std::cout << "ScavTrap <" << target.getName() << "> \"It's like a box of chocolates...\"" << std::endl;
	return ;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap const & target) const {
	std::cout << "NinjaTrap <" << this->_name << "> offer his.her shoe box to " << target.getName() << " (NinjaTrap)!" << std::endl;
	std::cout << "NinjaTrap <" << target.getName() << "> \"Oooh, shiny!\"" << std::endl;
	return ;
}

NinjaTrap &		NinjaTrap::operator=( NinjaTrap const  & rhs ) {
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
