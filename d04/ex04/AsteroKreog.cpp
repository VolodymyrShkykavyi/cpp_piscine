#include "AsteroKreog.hpp"


AsteroKreog::AsteroKreog(void): name("AsteroKreog") {
	std::cout << "(AsteroKreog) default constructor called" << std::endl;
}

std::string AsteroKreog::getName() const {
	return this->name;
}
std::string AsteroKreog::beMined(StripMiner *o) const{
	(void)o;
	return "Flavium";
}
std::string AsteroKreog::beMined(DeepCoreMiner *o) const{
	(void)o;
	return "Thorite";
}


AsteroKreog& AsteroKreog::operator=(AsteroKreog const & rhs) {
	std::cout << "(AsteroKreog) assignation operator called";
	this->name = rhs.name;	
	return *this;
}

std::ostream& operator<<(std::ostream& out, AsteroKreog const &i) {
	out << "(AsteroKreog) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

AsteroKreog::AsteroKreog(AsteroKreog const & src) {
	std::cout << "(AsteroKreog) copy constructor called" << std::endl;
	*this = src;
    return ;
}

AsteroKreog::~AsteroKreog(void) {
	std::cout << "(AsteroKreog) destructor AsteroKreog called" << std::endl;

}
