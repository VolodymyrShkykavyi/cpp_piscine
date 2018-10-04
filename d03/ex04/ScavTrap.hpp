
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);
    ScavTrap		& operator=(ScavTrap const & right);

	void	challengeNewcomer(std::string const & target);

protected:
	void 		_setDefaultValues(void);
};

#endif
