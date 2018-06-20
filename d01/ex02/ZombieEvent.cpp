#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return new Zombie(this->_type, name);
}

void	ZombieEvent::randomChump()
{
	std::string	arr[5] = {"Kabachok", "Zagiblik", "Meison", "Random name", "Nalisnik"};

	Zombie zombie(this->_type, arr[rand() % 5]);
	zombie.announce();
}