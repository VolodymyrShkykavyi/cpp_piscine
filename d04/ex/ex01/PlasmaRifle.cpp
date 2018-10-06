#include "PlasmaRifle.hpp"

/* Constructors */
PlasmaRifle::PlasmaRifle(void)
: AWeapon("Plasma Rifle", 5, 21) {
	// std::cout << this->name << " is construct (called)" << std::endl;
    return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	// std::cout << "(PlasmaRifle) copy constructor called" << std::endl;
	*this = src;
    return ;
}
/* end constructors */

void PlasmaRifle::attack() const {
	// std::cout << this->name << " with " << this->damage << " cost " << this->apcost;
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/* override */
PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const & rhs) {
	std::cout << "(PlasmaRifle) assignation operator called";
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->apcost = rhs.apcost;
	return *this;
}

std::ostream& operator<<(std::ostream& out, PlasmaRifle const &i) {
	out << "Hello my name is " << i.getName() << " !"<< std::endl;
	return out;
}

/* Destructors */
PlasmaRifle::~PlasmaRifle(void) {
	// std::cout << "(PlasmaRifle) destructor PlasmaRifle called" << std::endl;
    return ;
}
