#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanB( std::string name );
	void	setWeapon( Weapon &weapon );
	void	attack( void );
};

#endif