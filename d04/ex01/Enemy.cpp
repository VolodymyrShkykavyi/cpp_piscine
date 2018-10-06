#include "Enemy.hpp"

Enemy::Enemy(void) {

}

Enemy::Enemy(int hp, std::string const & type): hp(hp), type(type) {
}

Enemy::Enemy(Enemy const & src) {
	*this = src;
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

Enemy::~Enemy(void) {

}
