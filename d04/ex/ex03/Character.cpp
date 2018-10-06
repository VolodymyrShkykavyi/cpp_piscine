#include "Character.hpp"
#include <iostream>
#include <sstream>
#include <string>
/* Constructors */
Character::Character(void) {
	// std::cout << "(Character) default constructor called" << std::endl;
    return ;
}


Character::Character(std::string name): name(name), materia(new AMateria*[4]()) {
	// std::cout << "(Character) default constructor called" << std::endl;
    return ;
}

/* function members */
std::string const & Character::getName() const{
	return this->name;
}

std::string Character::getWeaponInfos(int idx) const {
	std::stringstream infos;
	if ((idx >= 0) && (idx < 4) && this->materia[idx])
	{
		infos << " arme: " <<idx << " type: " << this->materia[idx]->getType()
		<< ", XP: " << this->materia[idx]->getXP();
		return infos.str();
	}
	return " arme: NULL";
}

void Character::equip(AMateria* m){
	int i = 0;
	for (; this->materia[i]; i++) 
		;
	if (i < 4)
		this->materia[i] = m->clone();
}

void Character::unequip(int idx){
	if ((idx >= 0 && idx < 4 ) && this->materia[idx])
		this->materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 4 || !this->materia[idx]) return;
	this->materia[idx]->use(target);
	// AMateria::use(target);
}

/* override */
Character& Character::operator=(Character const & rhs) {
	std::cout << "(Character) assignation operator called";
	AMateria **tmp = rhs.materia;

	for (int i = 0; i < 4; i++)
	{
		if(this->materia[i])
		delete this->materia[i];
	}
	delete [] this->materia;
	this->materia = new AMateria*[4];
	this->name = name;
	for (int i = 0; i < 4; i++) 
		this->materia[i] = tmp[i]->clone();
	return *this;
}

std::ostream& operator<<(std::ostream& out, Character const &i) {
	out << "(Character) WARNING ! ADD A LOGIC <<" << std::endl;
	(void)i;
	return out;
}

Character::Character(Character const & src) {
	std::cout << "(Character) copy constructor called" << std::endl;
	AMateria **tmp = src.materia;
	for (int i = 0; i < 4; i++)
	{
		if(this->materia[i])
		delete this->materia[i];
	}
	delete [] this->materia;
	this->materia = new AMateria*[4];
	this->name = name;
	for (int i = 0; i < 4; i++) 
		this->materia[i] = tmp[i];
	*this = src;
    return ;
}

/* Destructors */
Character::~Character(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
	delete [] this->materia;
	// std::cout << "(Character) destructor Character called" << std::endl;
    return ;
}
