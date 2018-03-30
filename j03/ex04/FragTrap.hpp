#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {

public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap & operator=( FragTrap const & rhs);

	unsigned int	cryoAttack(std::string const & target) const;
	unsigned int	rocketAttack(std::string const & target) const;
	unsigned int	shockAttack(std::string const & target) const;
	unsigned int	fireAttack(std::string const & target) const;
	unsigned int	sniperAttack(std::string const & target) const;

	unsigned int	vaulthunter_dot_exe(std::string const & target);
};

#endif
