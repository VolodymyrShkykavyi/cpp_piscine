#include "Ice.hpp"

/* Constructors */
Ice::Ice(void): AMateria("ice") {
	// std::cout << "(Ice) default constructor called" << std::endl;
    return ;
}

/* function members */
AMateria* Ice::clone() const {
	AMateria	*clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}

/* override */
Ice& Ice::operator=(Ice const & rhs) {
	std::cout << "(Ice) assignation operator called";
	this->setXP(rhs.getXP());
	return *this;
}

std::ostream& operator<<(std::ostream& out, Ice const &i) {
	out << "(Ice) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

Ice::Ice(Ice const & src) {
	std::cout << "(Ice) copy constructor called" << std::endl;
	*this = src;
    return ;
}

/* Destructors */
Ice::~Ice(void) {
	// std::cout << "(Ice) destructor Ice called" << std::endl;
    return ;
}
