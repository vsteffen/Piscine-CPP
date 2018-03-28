#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

# include <iostream>
# include <stddef.h>
# include "Weapon.hpp"

class	HumanB {

private:
	std::string		_name;
	Weapon			*_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);

	void	attack(void) const ;
	void	setWeapon(Weapon &weapon);

};

#endif
