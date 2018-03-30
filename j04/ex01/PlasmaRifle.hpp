#ifndef PLASMARIFLE_CLASS_H
# define PLASMARIFLE_CLASS_H

# include <iostream>
# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon {

public:
	PlasmaRifle( void );
	PlasmaRifle(std::string const & name, int apcost, int damage);
	PlasmaRifle( PlasmaRifle const & src );
	virtual ~PlasmaRifle();

	PlasmaRifle & operator=( PlasmaRifle const & rhs);

	virtual void	attack(void) const;

	std::string virtual		getName(void) const; // care

};

#endif
