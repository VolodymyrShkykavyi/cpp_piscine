#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
: AWeapon("Plasma Rifle", 5, 21) {

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	*this = src;
    return ;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

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


PlasmaRifle::~PlasmaRifle(void) {
}
