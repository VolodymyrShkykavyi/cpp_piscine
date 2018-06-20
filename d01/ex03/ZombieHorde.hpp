#ifndef ZOMBIEHORDE_HPP 
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
public:

	ZombieHorde(int i);
	~ZombieHorde();
	void	announce( void );

private:
	Zombie*	_horde;
	int		_count;
};

#endif