#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap & operator=( ScavTrap const & rhs);	

	void	danceBattleChallenge(std::string const & target) const;
	void	shootPacificCreaturesChallenge(std::string const & target) const;
	void	rollFasterChallenge(std::string const & target) const;
	void	jokeContestChallenge(std::string const & target) const;
	void	rallyDeathValleyChallenge(std::string const & target) const;

	void	challengeNewcomer(std::string const & target);
};

#endif
