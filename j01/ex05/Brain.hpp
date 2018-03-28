#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

# include <stddef.h>
# include <string>

class	Brain {

public:
	Brain(void);
	~Brain(void);

	std::string		identify(void) const;
};

#endif
