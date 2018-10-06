#include "Peon.hpp"

Peon::Peon(Peon const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Peon::Peon(std::string name): Victim(name) {
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}

Peon& Peon::operator=(Peon const & rhs) {
    std::cout << "Assignation operator called";
    this->_name = rhs._name;
    return *this;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}