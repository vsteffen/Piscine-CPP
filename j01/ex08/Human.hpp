#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

# include <stddef.h>

class Human
{
private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);

public:
	Human(void);
	~Human(void);
	void action(std::string const & action_name, std::string const & target);
};
#endif
