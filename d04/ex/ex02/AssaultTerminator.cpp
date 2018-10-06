#include "AssaultTerminator.hpp"

/* Constructors */
AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
    return ;
}
/* function members */
ISpaceMarine* AssaultTerminator::clone() const {
	ISpaceMarine *clone = new AssaultTerminator();
	// std::cout << "A CHANGERR" << std::endl;
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
/* override */
AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & rhs) {
	std::cout << "(AssaultTerminator) assignation operator called";
	/* add logic */
	(void)rhs;
	// *this = rhs;
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

/* Destructors */
AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back ..." << std::endl;
    return ;
}
