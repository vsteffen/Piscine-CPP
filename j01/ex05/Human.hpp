#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

# include <iostream>
# include <stddef.h>
# include "Brain.hpp"

class	Human {

private:
	Brain const		_brain;

public:
	Human(void);
	~Human(void);

	std::string		identify(void) const;

	Brain const		&getBrain(void) const;

};

#endif
