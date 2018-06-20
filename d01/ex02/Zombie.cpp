#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
	this->_type = type;
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died." << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " <<
		"Braiiiiiiinnnssss..." << std::endl;
}