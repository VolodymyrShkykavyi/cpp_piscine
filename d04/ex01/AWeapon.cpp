#include "AWeapon.hpp"

AWeapon::AWeapon() {
    this->name = "";
    this->damage = 0;
    this->apcost = 0;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: name(name), apcost(apcost), damage(damage) {
}

void AWeapon::attack() const {
	std::cout << "(AWeapon) " << this->name << "  default attack (virtual pas bien) " << std::endl;
}

std::string AWeapon::getName() const {
	return this->name;
}

int AWeapon::getAPCost() const {
	return this->apcost;
}

int AWeapon::getDamage() const {
	return this->damage;
}

AWeapon& AWeapon::operator=(AWeapon const & rhs) {
	std::cout << "(AWeapon) assignation operator called";
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->apcost = rhs.apcost;
	return *this;
}

std::ostream& operator<<(std::ostream& out, AWeapon const &i) {
	out << "(AWeapon) Hello my name is " << i.getName() << " !"<< std::endl;
	return out;
}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
}

AWeapon::~AWeapon(void) {
}
