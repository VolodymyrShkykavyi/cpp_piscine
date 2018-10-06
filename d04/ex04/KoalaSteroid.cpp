#include "KoalaSteroid.hpp"


KoalaSteroid::KoalaSteroid(void): name("KoalaSteroid") {
	std::cout << "(KoalaSteroid) default constructor called" << std::endl;
    return ;
}

std::string KoalaSteroid::getName() const {
	return this->name;
}

std::string KoalaSteroid::beMined(StripMiner *o) const{
	(void)o;
	return "Krpite";
}
std::string KoalaSteroid::beMined(DeepCoreMiner *o) const{
	(void)o;
	return "Zazium";
}

KoalaSteroid& KoalaSteroid::operator=(KoalaSteroid const & rhs) {
	std::cout << "(KoalaSteroid) assignation operator called";
	this->name = rhs.name;
	return *this;
}

std::ostream& operator<<(std::ostream& out, KoalaSteroid const &i) {
	out << "(KoalaSteroid) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

KoalaSteroid::KoalaSteroid(KoalaSteroid const & src) {
	std::cout << "(KoalaSteroid) copy constructor called" << std::endl;
	*this = src;
    return ;
}

KoalaSteroid::~KoalaSteroid(void) {
	std::cout << "(KoalaSteroid) destructor KoalaSteroid called" << std::endl;
    return ;
}
