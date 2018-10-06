#include "TacticalMarine.hpp"

/* Constructors */
TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}
/* function members */
ISpaceMarine* TacticalMarine::clone() const {
	ISpaceMarine *clone = new TacticalMarine();
	// std::cout << "A CHANGERR" << std::endl;
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
/* override */
TacticalMarine& TacticalMarine::operator=(TacticalMarine const & rhs) {
	std::cout << "(TacticalMarine) assignation operator called";
	/* add logic */
	(void)rhs;
	// *this = rhs;
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

/* Destructors */
TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh ..." << std::endl;
    return ;
}
