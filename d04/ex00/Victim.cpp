#include "Victim.hpp"
#include <iostream>

Victim::Victim(void) {
	std::cout << "Default Constructor Victim called(void)" << std::endl;
}

Victim::Victim(std::string name): name(name) {
	std::cout << "Some random victim called "<< name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

Victim& Victim::operator=(Victim const & rhs) {
	std::cout << "Assignation operator called";
	this->name = rhs.name;
	return *this;
}

std::string Victim::getName(void) const{
	return this->name;
}

std::ostream& operator<<(std::ostream& o, Victim const &i) {
	o << "I'm " << i.getName() << " and I like otters !" << std::endl;
	return o;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}