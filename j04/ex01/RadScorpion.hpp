#ifndef RADSCORPION_CLASS_H
# define RADSCORPION_CLASS_H

# include <iostream>
# include "Enemy.hpp"

class	RadScorpion : public Enemy {

public:
	RadScorpion( void );
	RadScorpion(int hp, std::string const & type);
	RadScorpion( RadScorpion const & src );
	virtual ~RadScorpion();

	// RadScorpion & operator=( RadScorpion const & rhs);
	using	Enemy::operator=;
};

#endif
