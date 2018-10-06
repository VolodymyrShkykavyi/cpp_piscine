#include "DeepCoreMiner.hpp"
DeepCoreMiner::DeepCoreMiner(void) {
	std::cout << "(DeepCoreMiner) default constructor called" << std::endl;
    return ;
}
void DeepCoreMiner::mine(IAsteroid* as) {
	std::cout << "* mining deep ... got " << as->beMined(this) << " ! *" << std::endl;
}

DeepCoreMiner& DeepCoreMiner::operator=(DeepCoreMiner const & rhs) {
	std::cout << "(DeepCoreMiner) assignation operator called";
	(void)rhs;
	return *this;
}

std::ostream& operator<<(std::ostream& out, DeepCoreMiner const &i) {
	out << "(DeepCoreMiner) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & src) {
	std::cout << "(DeepCoreMiner) copy constructor called" << std::endl;
	*this = src;
    return ;
}


DeepCoreMiner::~DeepCoreMiner(void) {
	std::cout << "(DeepCoreMiner) destructor DeepCoreMiner called" << std::endl;
    return ;
}
