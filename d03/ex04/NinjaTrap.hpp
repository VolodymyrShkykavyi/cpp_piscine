
#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class NinjaTrap: virtual public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);
    NinjaTrap		& operator=(NinjaTrap const & right);

	void	ninjaShoebox(NinjaTrap const &target) const;
	void	ninjaShoebox(ClapTrap const &target) const;
	void	ninjaShoebox(FragTrap const &target) const;
	void	ninjaShoebox(ScavTrap const &target) const;

protected:
	void 		_setDefaultValues(void);
};

#endif
