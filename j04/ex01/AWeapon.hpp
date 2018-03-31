#ifndef AWEAPON_CLASS_H
# define AWEAPON_CLASS_H

# include <iostream>

class	AWeapon {

protected:
	std::string		_name;
	int				_apcost;
	int				_damage;

public:
	AWeapon( void );
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon( AWeapon const & src );
	virtual ~AWeapon();

	AWeapon & operator=( AWeapon const & rhs);

	virtual void	attack(void) const = 0;

	std::string const &		getName(void) const;
	int						getAPCost(void) const;
	int 					getDamage(void) const;

};

#endif
