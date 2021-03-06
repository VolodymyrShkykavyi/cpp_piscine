
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
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
	ScavTrap novakid("Novakid");

	apex.challengeNewcomer(bee.getName());
	novakid.challengeNewcomer(pig.getName());
	apex.challengeNewcomer(cow.getName());
	novakid.challengeNewcomer(apex.getName());

	apex.rangedAttack(cow.getName());
	cow.takeDamage(apex.getRangedAttackDamage());

	pig.vaulthunter_dot_exe(novakid.getName());
	novakid.takeDamage(rand());

	novakid.meleeAttack(apex.getName());
	apex.takeDamage(novakid.getMeleeAttackDamage());

	std::cout << cow.getName() << " has " << cow.getHitPoints() << " health left." << std::endl;
	std::cout << bee.getName() << " has " << bee.getHitPoints() << " health left." << std::endl;
	std::cout << pig.getName() << " has " << pig.getHitPoints() << " health left." << std::endl;
	std::cout << apex.getName() << " has " << apex.getHitPoints() << " health left." << std::endl;
	std::cout << novakid.getName() << " has " << novakid.getHitPoints() << " health left." << std::endl;
	
	
	NinjaTrap ninja1("ninja1");
	ClapTrap ninja2("ninja2");

	ninja1.ninjaShoebox(bee);
	ninja1.ninjaShoebox(apex);
	ninja1.ninjaShoebox(ninja1);
	ninja1.ninjaShoebox(ninja2);

	ninja1.meleeAttack(cow.getName());
	cow.takeDamage(ninja1.getMeleeAttackDamage());

	bee.rangedAttack(ninja1.getName());
	ninja1.takeDamage(bee.getRangedAttackDamage());

	ninja1.rangedAttack(pig.getName());
	pig.takeDamage(ninja1.getRangedAttackDamage());

	std::cout << cow.getName() << " has " << cow.getHitPoints() << " health left." << std::endl;
	std::cout << bee.getName() << " has " << bee.getHitPoints() << " health left." << std::endl;
	std::cout << pig.getName() << " has " << pig.getHitPoints() << " health left." << std::endl;
	std::cout << apex.getName() << " has " << apex.getHitPoints() << " health left." << std::endl;
	std::cout << novakid.getName() << " has " << novakid.getHitPoints() << " health left." << std::endl;
	std::cout << ninja1.getName() << " has " << ninja1.getHitPoints() << " health left." << std::endl;
	std::cout << ninja2.getName() << " has " << ninja2.getHitPoints() << " health left." << std::endl;
}
