#include "StripMiner.hpp"

StripMiner::StripMiner(void) {
	std::cout << "(StripMiner) default constructor called" << std::endl;
}


void StripMiner::mine(IAsteroid* as) {
	std::cout << "* strip mining ... got " << as->beMined(this) <<" ! *" << std::endl;
}

StripMiner& StripMiner::operator=(StripMiner const & rhs) {
	std::cout << "(StripMiner) assignation operator called";
	(void)rhs;
	return *this;
}

std::ostream& operator<<(std::ostream& out, StripMiner const &i) {
	out << "(StripMiner) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

StripMiner::StripMiner(StripMiner const & src) {
	std::cout << "(StripMiner) copy constructor called" << std::endl;
	*this = src;
}


StripMiner::~StripMiner(void) {
	std::cout << "(StripMiner) destructor StripMiner called" << std::endl;
}
