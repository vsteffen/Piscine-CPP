#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <stddef.h>
# include <string>

class	Zombie {

public:
	Zombie(void);
	~Zombie(void);

	void announce(void) const ;

	std::string		name;
	std::string		type;
};

#endif
