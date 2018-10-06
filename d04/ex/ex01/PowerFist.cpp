#include "PowerFist.hpp"

/* Constructors */
PowerFist::PowerFist(void)
: AWeapon("Power Fist", 8, 50) {
	// std::cout << this->name << " is construct (called)" << std::endl;
    return ;
}

PowerFist::PowerFist(PowerFist const & src) {
	// std::cout << "(PowerFist) copy constructor called" << std::endl;
	*this = src;
    return ;
}
/* end constructors */

void PowerFist::attack() const {
	// std::cout << this->name << " with " << this->damage << " cost " << this->apcost;
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}

/* override */
PowerFist& PowerFist::operator=(PowerFist const & rhs) {
	std::cout << "(PowerFist) assignation operator called";
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->apcost = rhs.apcost;
	return *this;
}

std::ostream& operator<<(std::ostream& out, PowerFist const &i) {
	out << "Hello my name is " << i.getName() << " !"<< std::endl;
	return out;
}

/* Destructors */
PowerFist::~PowerFist(void) {
	// std::cout << "(PowerFist) destructor PowerFist called" << std::endl;
    return ;
}
