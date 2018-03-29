#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

# include <iostream>

class	FragTrap {

private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAttackDmg;
	unsigned int	_rangedAttackDmg;
	unsigned int	_armorDmgRed;

public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap & operator=( FragTrap const & rhs);

	unsigned int	rangedAttack(std::string const & target) const;
	unsigned int	meleeAttack(std::string const & target) const;

	unsigned int	cryoAttack(std::string const & target) const;
	unsigned int	rocketAttack(std::string const & target) const;
	unsigned int	shockAttack(std::string const & target) const;
	unsigned int	fireAttack(std::string const & target) const;
	unsigned int	sniperAttack(std::string const & target) const;

	unsigned int	vaulthunter_dot_exe(std::string const & target);

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	setName(std::string name);
	void	setHitPoints(unsigned int hitPoints);
	void	setMaxHitPoints(unsigned int maxHitPoints);
	void	setEnergyPoints(unsigned int energyPoints);
	void	setMaxEnergyPoints(unsigned int maxEnergyPoints);
	void	setLevel(unsigned int level);
	void	setMeleeAttackDmg(unsigned int meleeAttackDmg);
	void	setRangedAttackDmg(unsigned int rangedAttackDmg);
	void	setArmorDmgRed(unsigned int armorDmgRed);

	std::string		getName( void ) const;
	unsigned int	getHitPoints( void ) const;
	unsigned int	getMaxHitPoints( void ) const;
	unsigned int	getEnergyPoints( void ) const;
	unsigned int	getMaxEnergyPoints( void ) const;
	unsigned int	getLevel( void ) const;
	unsigned int	getMeleeAttackDmg( void ) const;
	unsigned int	getRangedAttackDmg( void ) const;
	unsigned int	getArmorDmgRed( void ) const;

};

#endif
