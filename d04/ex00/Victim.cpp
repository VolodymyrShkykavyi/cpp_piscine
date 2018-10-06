#include "Victim.hpp"

Victim::Victim(void) {
	std::cout << "Default Constructor Victim called(void)" << std::endl;
}

Victim::Victim(std::string name): _name(name) {
	std::cout << "Some random victim called "<< name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

Victim& Victim::operator=(Victim const & rhs) {
	std::cout << "Assignation operator called";
	this->_name = rhs._name;
	return *this;
}

std::string Victim::getName(void) const{
	return this->_name;
}

std::ostream& operator<<(std::ostream& o, Victim const &r) {
	o << "I'm " << r.getName() << " and I like otters !" << std::endl;
	return o;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}