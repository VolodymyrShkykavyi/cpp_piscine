#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent zombie_alliance;
	ZombieEvent	zombie_empire;
	Zombie	*zombies[3];

	zombie_alliance.setZombieType("Alliance");
	zombie_empire.setZombieType("Empire");

	// heap
	zombies[0] = zombie_alliance.newZombie("first from heap");
	zombies[1] = zombie_alliance.newZombie("second from heap");
	zombies[2] = zombie_empire.newZombie("third from heap");

	for (int i = 0; i < 3; i++) {
		zombies[i]->announce();
	}
	for (int i = 0; i < 3; i++) {
		delete zombies[i];
	}
	
	// stack
	for (int i = 0; i < 5; i++)
		zombie_empire.randomChump();

	zombie_alliance.randomChump();

	return (0);
}