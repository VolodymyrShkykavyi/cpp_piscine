
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <time.h>

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

	ScavTrap apex("Apex");
	ScavTrap dovakin("Dovakin");

	apex.challengeNewcomer(bee.getName());
	dovakin.challengeNewcomer(pig.getName());
	apex.challengeNewcomer(cow.getName());
	dovakin.challengeNewcomer(apex.getName());

	apex.rangedAttack(cow.getName());
	cow.takeDamage(apex.getRangedAttackDamage());

	pig.vaulthunter_dot_exe(dovakin.getName());
	dovakin.takeDamage(rand());

	dovakin.meleeAttack(apex.getName());
	apex.takeDamage(dovakin.getMeleeAttackDamage());

    std::cout << cow.getName() << " has " << cow.getHitPoints() << " health left." << std::endl;
	std::cout << bee.getName() << " has " << bee.getHitPoints() << " health left." << std::endl;
	std::cout << pig.getName() << " has " << pig.getHitPoints() << " health left." << std::endl;
	std::cout << apex.getName() << " has " << apex.getHitPoints() << " health left." << std::endl;
	std::cout << dovakin.getName() << " has " << dovakin.getHitPoints() << " health left." << std::endl;



}
