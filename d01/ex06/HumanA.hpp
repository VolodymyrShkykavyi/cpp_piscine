#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanA( std::string name, Weapon &weapon );
	void	attack( void );
};

#endif