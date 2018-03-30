#ifndef NINJATRAP_CLASS_H
# define NINJATRAP_CLASS_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap {

public:
	NinjaTrap( void );
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	NinjaTrap & operator=( NinjaTrap const & rhs);

	void	ninjaShoebox(ClapTrap const & target) const;
	void	ninjaShoebox(FragTrap const & target) const;
	void	ninjaShoebox(ScavTrap const & target) const;
	void	ninjaShoebox(NinjaTrap const & target) const;
};

#endif
