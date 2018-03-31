#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class	Character {

protected:
	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;

public:
	Character( void );
	Character(std::string const & name);
	Character( Character const & src );
	virtual ~Character();

	Character & operator=( Character const & rhs);

	void	recoverAP(void);
	void	equip(AWeapon *weapon);
	void	attack(Enemy *enemy);

	std::string const &		getName( void ) const;
	int						getAP( void ) const;
	AWeapon	*				getWeapon( void ) const;

};

std::ostream &		operator<<( std::ostream & o, Character const & i );

#endif
