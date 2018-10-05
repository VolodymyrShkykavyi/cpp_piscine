
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <time.h>

int main( void )
{
	srand(time(0));

    SuperTrap s1("super1");
    SuperTrap s2("super2");

    FragTrap f1("frag1");
    NinjaTrap n1("nin1");

    std::cout << std::endl;
    std::cout << s1.getName() << " has " << s1.getHitPoints() << " health left." << std::endl;
    std::cout << s2.getName() << " has " << s2.getHitPoints() << " health left." << std::endl;
    std::cout << f1.getName() << " has " << f1.getHitPoints() << " health left." << std::endl;
    std::cout << n1.getName() << " has " << n1.getHitPoints() << " health left." << std::endl;

    s1.rangedAttack(n1.getName());
    n1.takeDamage(s1.getRangedAttackDamage());

    std::cout << std::endl;
    std::cout << s1.getName() << " has " << s1.getHitPoints() << " health left." << std::endl;
    std::cout << s2.getName() << " has " << s2.getHitPoints() << " health left." << std::endl;
    std::cout << f1.getName() << " has " << f1.getHitPoints() << " health left." << std::endl;
    std::cout << n1.getName() << " has " << n1.getHitPoints() << " health left." << std::endl;


}
