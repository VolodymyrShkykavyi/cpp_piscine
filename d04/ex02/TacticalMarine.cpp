#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}
ISpaceMarine* TacticalMarine::clone() const {
	ISpaceMarine *clone = new TacticalMarine();
	return clone;
}

void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT " << std::endl;
}
void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with chainsword *" << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const & rhs) {
	std::cout << "(TacticalMarine) assignation operator called";
	(void)rhs;
	return *this;
}

std::ostream& operator<<(std::ostream& out, TacticalMarine const &i) {
	out << "(TacticalMarine) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	std::cout << "(TacticalMarine) copy constructor called" << std::endl;
	*this = src;
    return ;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh ..." << std::endl;
    return ;
}
