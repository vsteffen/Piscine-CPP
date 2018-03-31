#ifndef POWERFIST_CLASS_H
# define POWERFIST_CLASS_H

# include <iostream>
# include "AWeapon.hpp"

class	PowerFist : public AWeapon {

public:
	PowerFist( void );
	PowerFist(std::string const & name, int apcost, int damage);
	PowerFist( PowerFist const & src );
	virtual ~PowerFist();

	// PowerFist & operator=( PowerFist const & rhs);
	using	AWeapon::operator=;

	virtual void	attack(void) const;

};

#endif
