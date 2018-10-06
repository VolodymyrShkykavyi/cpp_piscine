#include "Cure.hpp"


Cure::Cure(void): AMateria("cure") {
}


AMateria* Cure::clone() const {
	AMateria	*clone = new Cure();
	return clone;
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}


Cure& Cure::operator=(Cure const & rhs) {
	std::cout << "(Cure) assignation operator called";
	this->setXP(rhs.getXP());
	return *this;
}

std::ostream& operator<<(std::ostream& out, Cure const &i) {
	out << "(Cure) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

Cure::Cure(Cure const & src) {
	std::cout << "(Cure) copy constructor called" << std::endl;
	*this = src;

}

Cure::~Cure(void) {

}
