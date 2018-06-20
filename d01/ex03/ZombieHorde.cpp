#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->_horde = new Zombie[n];
	this->_count = n;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_count; i++)
		this->_horde[i].announce();
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] this->_horde;
}