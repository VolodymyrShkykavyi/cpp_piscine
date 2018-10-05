
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);
    FragTrap		& operator=(FragTrap const & right);

	void	vaulthunter_dot_exe(std::string const & target);
    void		rangedAttack(std::string const &target) const;

protected:
	void 		_setDefaultValues(void)  ;
};

#endif
