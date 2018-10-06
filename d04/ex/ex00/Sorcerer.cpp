// Sorcerer
#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(void) {
    std::cout << "Default Constructor Sorcerer called(void)" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): name(name), title(title) {
    std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Sorcerer& Sorcerer::operator=(Sorcerer const & rhs) {
    std::cout << "Assignation operator called";
    this->name = rhs.name;
    this->title = title;
    return *this;
}

void Sorcerer::polymorph(Victim const & victim) const {
    victim.getPolymorphed();
}

std::string Sorcerer::getName(void) const {
    return this->name;
}

std::string Sorcerer::getTitle(void) const {
    return this->title;
}

std::ostream& operator<<(std::ostream& o, Sorcerer const &i) {
    o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}
