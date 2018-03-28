#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

# include <stddef.h>
# include <string>

class	Weapon {

private:
	std::string		_type;

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string const	&getType(void) const ;
	void				setType(std::string type) ;
};

#endif
