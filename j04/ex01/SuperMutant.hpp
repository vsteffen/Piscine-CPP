#ifndef SUPERMUTANT_CLASS_H
# define SUPERMUTANT_CLASS_H

# include <iostream>
# include "Enemy.hpp"
# include "SuperMutant.hpp"

class	SuperMutant : public Enemy {

public:
	SuperMutant( void );
	SuperMutant(int hp, std::string const & type);
	SuperMutant( SuperMutant const & src );
	virtual ~SuperMutant();

	// SuperMutant & operator=( SuperMutant const & rhs);
	using	Enemy::operator=;

	virtual void	takeDamage(int damage);

};

#endif
