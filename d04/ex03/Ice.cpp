#include "Ice.hpp"


Ice::Ice(void): AMateria("ice") {

}


AMateria* Ice::clone() const {
	AMateria	*clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}


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


Ice::~Ice(void) {

}
