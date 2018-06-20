#ifndef ZOMBIEEVENT_CPP
# define ZOMBIEEVENT_CPP

# include "Zombie.hpp"
# include <string>
# include <cstdlib>

class ZombieEvent
{
public:
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	void	randomChump(void);
	
private:
	std::string	_type;
};

#endif