#ifndef SUPERTRAP_CLASS_H
# define SUPERTRAP_CLASS_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"
# include "SuperTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap( void );
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & src );
	~SuperTrap( void );

	// using NinjaTrap::rangedAttack;
	// using NinjaTrap::meleeAttack;
	unsigned int	rangedAttack(std::string const & target) const;
	unsigned int	meleeAttack(std::string const & target) const;

};

#endif
