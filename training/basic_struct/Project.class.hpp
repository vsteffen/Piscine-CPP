#ifndef PROJECT_CLASS_H
# define PROJECT_CLASS_H

# include <stddef.h>

class	Project {

private:
	int				_var;
	static size_t	_nbInst;

public:
	Project(void);
	~Project(void);

	int		getVar(void) const;
	void	setVar(int var);

	size_t			getNbInst() const;
};

#endif
