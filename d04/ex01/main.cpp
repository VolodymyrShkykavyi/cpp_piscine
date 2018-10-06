#include <iostream>
#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main(){
	PlasmaRifle pr;
	RadScorpion rs;
	SuperMutant *sm = new SuperMutant();
	PowerFist pf;
	
	// pr.attack();
	// pf.attack();
	Character man("Allan");

	std::cout << man << std::endl;
	man.equip(&pr);
	std::cout << man << std::endl;
	man.attack(sm);

	std::cout << std::endl;
	// sm->takeDamage(10);
	// Enemy enemy_fail;
	return 0;
}

// int main() {
	// Character* zaz = new Character("zaz");
	// std::cout << *zaz;
	// Enemy* b = new RadScorpion();
	// AWeapon* pr = new PlasmaRifle();
	// AWeapon* pf = new PowerFist();
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->equip(pf);
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
// 	return 0;
// }
