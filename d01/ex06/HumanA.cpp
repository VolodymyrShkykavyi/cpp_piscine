#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _weapon(&weapon), _name(name)
{
	return;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}