#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &obj)
{
	*this = obj;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &r) 
{
	this->_name = r._name;
	this->_title = r._title;
	return *this;
}

std::string		Sorcerer::getName() const
{
	return this->_name;
}

std::string		Sorcerer::getTitle() const
{
	return this->_title;
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &r)
{
	os << "I am " << r.getName() << ", " << r.getTitle() << ", and I like ponies !" << std::endl;
	return os;
}

void Sorcerer::polymorph(const Victim &victim) const {
    victim.getPolymorphed();
}
