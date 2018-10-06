#include "Enemy.hpp"

Enemy::Enemy(void) {
	// std::cout << "(Enemy) default constructor called" << std::endl;
    return ;
}

Enemy::Enemy(int hp, std::string const & type): hp(hp), type(type) {
	// std::cout << "(Enemy) " << type << " constructor called" << std::endl;
}

Enemy::Enemy(Enemy const & src) {
	// std::cout << "(Enemy) copy constructor called" << std::endl;
	*this = src;
    return ;
}

int Enemy::getHP() const {
	return this->hp;
}

void Enemy::takeDamage(int dam) {
	if (dam < 0)
		return ;
	this->hp -= dam;
	if (this->hp < 0)
		this->hp = 0;
}

std::string Enemy::getType() const {
	return this->type;
}

/* override */
Enemy& Enemy::operator=(Enemy const & rhs) {
	std::cout << "(Enemy) assignation operator called";
	this->type = rhs.type;
	this->hp = rhs.hp;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Enemy const &i) {
	out << "(Enemy) Hello my name is " << i.getType() << " !"<< std::endl;
	return out;
}

/* Destructors */
Enemy::~Enemy(void) {
	// std::cout << "(Enemy) destructor Enemy called" << std::endl;
    return ;
}
