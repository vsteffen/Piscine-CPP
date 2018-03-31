#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

# include <iostream>

class	Enemy {

protected:
	int				_hp;
	std::string		_type;

public:
	Enemy( void );
	Enemy(int hp, std::string const & type);
	Enemy( Enemy const & src );
	virtual ~Enemy();

	Enemy & operator=( Enemy const & rhs);

	virtual void			takeDamage(int);

	std::string const &		getType(void) const;
	int						getHP(void) const;

};

#endif
