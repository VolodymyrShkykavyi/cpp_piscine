#include "PowerFist.hpp"

PowerFist::PowerFist(void)
: AWeapon("Power Fist", 8, 50) {

}

PowerFist::PowerFist(PowerFist const & src) {
	*this = src;
}

void PowerFist::attack() const {
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}

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


PowerFist::~PowerFist(void) {
}
