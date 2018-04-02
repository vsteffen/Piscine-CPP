#ifndef SQUAD_CLASS_H
# define SQUAD_CLASS_H

# include <iostream>

class	Squad : public ISquad {

private:
	static int			_nbCount;
	t_list*				_list = NULL;


public:

	typedef struct		s_list {
		Squad*			squad;
		struct s_list*	next;
	}					t_list;

	Squad( void );
	Squad( int const n);
	Squad( Squad const & src );
	~Squad( void );

	Squad & operator=( Squad const & rhs);

	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;

};

#endif
