#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* franc = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	Squad c;
	Squad *lc = new Squad;
	Squad *pc = new Squad;
	ISquad* u = new Squad(c);
	(void)u;
	(void)franc;
	(void)lc;
	{
		vlc->push(bob);
		vlc->push(franc);
		vlc->push(franc);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(jim);
		std::cout << "should be 2 => " << vlc->getCount() << std::endl;
	}
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "copy => "  << std::endl;
	lc->push(bob);
	lc->push(jim);
	pc->push(jim);
	pc->push(franc);
	pc->push(bob);
	pc->getUnit(0)->battleCry();
	std::cout << std::endl;
	std::cout << "LC 0 1 " << std::endl;
	lc->getUnit(0)->battleCry();
	lc->getUnit(1)->battleCry();
	std::cout << "LC count " << lc->getCount() << std::endl;
	std::cout << "PC 0 1 2" << std::endl;
	pc->getUnit(0)->battleCry();
	pc->getUnit(1)->battleCry();
	pc->getUnit(2)->battleCry();
	std::cout << "PC count " << pc->getCount() << std::endl;
	*lc = *pc;
	
	delete pc;
	std::cout << "LC 0 1 2 = PC 0 1 2" << std::endl;
	lc->getUnit(0)->battleCry();
	lc->getUnit(1)->battleCry();
	lc->getUnit(2)->battleCry();
	std::cout << "PC count " << pc->getCount() << std::endl;
	std::cout << "LC count " << lc->getCount() << std::endl;
	// std::cout << vlc;
	return 0;
}
