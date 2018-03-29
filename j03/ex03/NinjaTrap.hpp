#ifndef NINJATRAP_CLASS_H
# define NINJATRAP_CLASS_H

# include <iostream>
# include "ClapTrap.hpp"

class	NinjaTrap : public ClapTrap {

public:
	NinjaTrap( void );
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	void	danceBattleChallenge(std::string const & target) const;
	void	shootPacificCreaturesChallenge(std::string const & target) const;
	void	rollFasterChallenge(std::string const & target) const;
	void	jokeContestChallenge(std::string const & target) const;
	void	rallyDeathValleyChallenge(std::string const & target) const;

	void	challengeNewcomer(std::string const & target);
};

#endif
