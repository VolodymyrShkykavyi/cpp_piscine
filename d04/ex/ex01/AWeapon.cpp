#include "AWeapon.hpp"

/* Constructors */
AWeapon::AWeapon(void) {
	// std::cout << "(AWeapon) default constructor called" << std::endl;
    return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: name(name), apcost(apcost), damage(damage) {
	// std::cout << "(AWeapon) " << this->name << " is construct (called)" << std::endl;
}

/* Constructors def end */

void AWeapon::attack() const {
	std::cout << "(AWeapon) " << this->name << "  default attack (virtual pas bien) " << std::endl;
}

/* accessors */
std::string AWeapon::getName() const {
	return this->name;
}

int AWeapon::getAPCost() const {
	return this->apcost;
}

int AWeapon::getDamage() const {
	return this->damage;
}

/* override */
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
/* override end */

AWeapon::AWeapon(AWeapon const & src) {
	// std::cout << "(AWeapon) copy constructor called" << std::endl;
	*this = src;
    return ;
}

/* Destructors */
AWeapon::~AWeapon(void) {
	// std::cout << "(AWeapon) " << this->name << " destructor called" << std::endl;
    return ;
}
