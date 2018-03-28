#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

# include <iostream>
# include <stddef.h>
# include "Weapon.hpp"

class	HumanA {

private:
	std::string		_name;
	Weapon			&_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void) const ;
};

#endif
