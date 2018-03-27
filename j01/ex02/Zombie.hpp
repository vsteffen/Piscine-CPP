#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <stddef.h>
# include <string>

class	Zombie {

public:
	Zombie(void);
	~Zombie(void);

	void annonce(void) const ;

	std::string		name;
	std::string		type;
};

#endif
