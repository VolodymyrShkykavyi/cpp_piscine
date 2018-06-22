
#include "FragTrap.hpp"
#include <iostream>
#include <time.h>
#include <cmath>

int main( void )
{
	srand(time(0));

	FragTrap cow("cow");
	FragTrap bee("bee");
	FragTrap pig;

	cow.meleeAttack(bee.getName());
	bee.takeDamage(cow.getMeleeAttackDamage());

	bee.rangedAttack(pig.getName());
	pig.takeDamage(bee.getRangedAttackDamage());

	bee.vaulthunter_dot_exe(cow.getName());
	cow.takeDamage(rand());

	pig.vaulthunter_dot_exe(bee.getName());
	bee.takeDamage(rand());

	bee.vaulthunter_dot_exe(pig.getName());
	pig.takeDamage(rand());

	cow.vaulthunter_dot_exe(bee.getName());
	bee.takeDamage(rand());

	cow.beRepaired(12);

	std::cout << std::endl;
	std::cout << cow.getName() << " has " << cow.getHitPoints() << " health left." << std::endl;
	std::cout << bee.getName() << " has " << bee.getHitPoints() << " health left." << std::endl;
	std::cout << pig.getName() << " has " << pig.getHitPoints() << " health left." << std::endl;

}
