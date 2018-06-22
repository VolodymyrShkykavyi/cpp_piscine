
#include "FragTrap.hpp"
#include <iostream>
#include <time.h>

int main( void )
{
	srand(time(0));

	FragTrap avian("Avian");
	FragTrap floran("Floran");
	FragTrap human;

	avian.meleeAttack(floran.getName());
	floran.takeDamage(avian.getMeleeAttackDamage());

	floran.rangedAttack(human.getName());
	human.takeDamage(floran.getRangedAttackDamage());

	floran.vaulthunter_dot_exe(avian.getName());
	avian.takeDamage(floran.getEnergyAttackDamage());

	human.vaulthunter_dot_exe(floran.getName());
	floran.takeDamage(human.getEnergyAttackDamage());

	floran.vaulthunter_dot_exe(human.getName());
	human.takeDamage(floran.getEnergyAttackDamage());

	avian.vaulthunter_dot_exe(floran.getName());
	floran.takeDamage(avian.getEnergyAttackDamage());

	avian.beRepaired(12);

	std::cout << avian.getName() << " has " << avian.getHitPoints() << " health left." << std::endl;
	std::cout << floran.getName() << " has " << floran.getHitPoints() << " health left." << std::endl;
	std::cout << human.getName() << " has " << human.getHitPoints() << " health left." << std::endl;

}
