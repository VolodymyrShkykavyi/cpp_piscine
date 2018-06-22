
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap: public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap		& operator=(FragTrap const & right);

	void			rangedAttack(std::string const & target) const;
	void			meleeAttack(std::string const & target) const;

	void			sunblaster(std::string const & target);
	void			wildPulsar(std::string const & target);
	void			bubblegun(std::string const & target);
	void			flowerBouquet(std::string const & target);
	void			theDrumstick(std::string const & target);
	void			vaulthunter_dot_exe(std::string const & target);

};

#endif
