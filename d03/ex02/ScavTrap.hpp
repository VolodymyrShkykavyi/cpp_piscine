
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap		& operator=(ScavTrap const & right);

	void			rangedAttack(std::string const & target) const;
	void			meleeAttack(std::string const & target) const;

	void			foodfight(std::string const & target);
	void			hugFloran(std::string const & target);
	void			playMusic(std::string const & target);
	void			danceWithApex(std::string const & target);
	void			playStarbound(std::string const & target);
	void			challengeNewcomer(std::string const & target);

};

#endif
