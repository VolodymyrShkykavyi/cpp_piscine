#include "Character.hpp"

Character::Character(void) {

}

Character::Character(std::string const & name): name(name), ap(40), weapon(NULL) {

}

void Character::recoverAP() {
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon* weapon) {
	this->weapon = weapon;
}

void Character::attack(Enemy* enemy) {
	if(!this->weapon)
		return ;
	this->ap -= this->weapon->getAPCost();
	if (this->ap < 0)
		this->ap = 0;
	if (this->ap <= 0)
		return ;
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string Character::getName() const {
	return this->name;
}

std::string Character::getNameWeapon() const {
	if(!this->weapon)
		return "";
	return this->weapon->getName();
}

int Character::getAP() const {
	return this->ap;
}

Character::Character(Character const & src) {
	std::cout << "(Character) copy constructor called" << std::endl;
	*this = src;
    return ;
}

Character& Character::operator=(Character const & rhs) {
	std::cout << "(Character) assignation operator called";
	this->name = rhs.name;
	this->ap = rhs.ap;
	this->weapon = rhs.weapon;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Character const &i) {
	if (i.getNameWeapon().empty())
		out << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
	else
		out << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getNameWeapon() << std::endl;
	return out;
}

Character::~Character(void) {

}
