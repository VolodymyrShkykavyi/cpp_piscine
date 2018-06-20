#include "ZombieHorde.hpp"
#include <iostream>

int main( void )
{
	std::cout << "Creating horde" << std::endl;
	ZombieHorde horde = ZombieHorde(5);
	std::cout << "Horde announce" << std::endl;
	horde.announce();
	std::cout << "Horde RIP" << std::endl;
}