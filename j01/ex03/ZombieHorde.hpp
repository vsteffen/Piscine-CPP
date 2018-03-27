#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

# include <stddef.h>
# include "Zombie.hpp"

class	ZombieHorde {

private:
	std::string		_type;

public:
	ZombieHorde(void);
	~ZombieHorde(void);

	void		setZombieType(std::string type);
	Zombie* 	newZombie(std::string name);
	void		randomChump() const;

	static std::string		type;
};

#endif
