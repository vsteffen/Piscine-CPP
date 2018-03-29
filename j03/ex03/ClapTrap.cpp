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
