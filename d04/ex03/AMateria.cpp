#include "AMateria.hpp"

AMateria::AMateria(void)
	: xp_(0), type("AMateria") {
}

AMateria::AMateria(std::string const & type)
	: xp_(0), type(type) {

}

std::string const & AMateria::getType() const {
	return this->type;
}
void AMateria::setXP(unsigned int xp_) {
	this->xp_ = xp_;
}
void AMateria::setType(std::string type) {
	this->type = type;
}

unsigned int AMateria::getXP() const {
	return this->xp_;
}

void AMateria::use(ICharacter& target) {
	this->xp_ += 10;
	(void)target;
}

AMateria& AMateria::operator=(AMateria const & rhs) {
	std::cout << "(AMateria) assignation operator called";
	this->type = rhs.type;
	this->xp_ = rhs.xp_;
	return *this;
}

std::ostream& operator<<(std::ostream& out, AMateria const &i) {
	out << "(AMateria) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

AMateria::AMateria(AMateria const & src) {
	std::cout << "(AMateria) copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void) {
}
