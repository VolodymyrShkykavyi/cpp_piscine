#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const {
	ISpaceMarine *clone = new AssaultTerminator();
	return clone;
}

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}
void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & rhs) {
	std::cout << "(AssaultTerminator) assignation operator called";
	(void)rhs;

	return *this;
}

std::ostream& operator<<(std::ostream& out, AssaultTerminator const &i) {
	out << "(AssaultTerminator) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	std::cout << "(AssaultTerminator) copy constructor called" << std::endl;
	*this = src;
    return ;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back ..." << std::endl;
    return ;
}
