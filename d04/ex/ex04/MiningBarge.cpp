#include "MiningBarge.hpp"

/* Constructors */
// IMiningLaser* MiningBarge::lasers[4] = {};

MiningBarge::MiningBarge(void): lasers() {
	// LOOL that's sucks i know
	this->lasers[0] = 0;
	this->lasers[1] = 0;
	this->lasers[2] = 0;
	this->lasers[3] = 0;
	// this->lasers[4]
	std::cout << "(MiningBarge) default constructor called" << std::endl;
    return ;
}

/* function members */

/* override */
MiningBarge& MiningBarge::operator=(MiningBarge const & rhs) {
	std::cout << "(MiningBarge) assignation operator called";
	/* add logic */
	for (int i = 0; i < 4; i++)
		this->lasers[i] = rhs.lasers[i];
	return *this;
}

void MiningBarge::equip(IMiningLaser* o) {
	int i;
	i = 0;
	for (; this->lasers[i] && i < 4; i++)
		;
	if (i < 4) {
		this->lasers[i] = o;
	}
}

void MiningBarge::mine(IAsteroid* o) const {
	for(int i = 0; i < 4; i++)
		this->lasers[i]->mine(o);
}

std::ostream& operator<<(std::ostream& out, MiningBarge const &i) {
	out << "(MiningBarge) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

MiningBarge::MiningBarge(MiningBarge const & src) {
	std::cout << "(MiningBarge) copy constructor called" << std::endl;
	*this = src;
    return ;
}

/* Destructors */
MiningBarge::~MiningBarge(void) {
	std::cout << "(MiningBarge) destructor MiningBarge called" << std::endl;
    return ;
}
