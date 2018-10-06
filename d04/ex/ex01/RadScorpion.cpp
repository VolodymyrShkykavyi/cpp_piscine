#include "RadScorpion.hpp"

/* Constructors */
RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")  {
	std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const & src) {
	std::cout << "copy constructor called" << std::endl;
	*this = src;
    return ;
}

/* override */
RadScorpion& RadScorpion::operator=(RadScorpion const & rhs) {
	std::cout << "assignation operator called";
	this->type = rhs.type;
	this->hp = rhs.hp;
	return *this;
}

void RadScorpion::takeDamage(int dam) {
	if ((dam - 3) < 0)
		return ;
	this->hp -= (dam - 3);
	if (this->hp < 0)
		this->hp = 0;
}

std::ostream& operator<<(std::ostream& out, RadScorpion const &i) {
	out << "Hello my tape is " << i.getType() << " !"<< std::endl;
	return out;
}

/* Destructors */
RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
    return ;
}
