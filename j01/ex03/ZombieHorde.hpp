#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

# include <stddef.h>
# include "Zombie.hpp"

class	ZombieHorde {

private:
	int		_N;
	Zombie	*_zombie;

public:
	ZombieHorde(int N);
	~ZombieHorde(void);

};

#endif
