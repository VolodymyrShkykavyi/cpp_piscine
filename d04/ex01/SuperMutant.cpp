#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")  {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) {
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}

SuperMutant& SuperMutant::operator=(SuperMutant const & rhs) {
	std::cout << "assignation operator called";
	this->type = rhs.type;
	this->hp = rhs.hp;
	return *this;
}

void SuperMutant::takeDamage(int dam) {
	if ((dam - 3) < 0)
		return ;
	this->hp -= (dam - 3);
	if (this->hp < 0)
		this->hp = 0;
}

std::ostream& operator<<(std::ostream& out, SuperMutant const &i) {
	out << "Hello my tape is " << i.getType() << " !"<< std::endl;
	return out;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
}
