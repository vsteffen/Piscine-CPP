#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy (void) : _hp(0), _type("Enemy") {
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
	return ;
}

Enemy::Enemy ( Enemy const & src ) {
	*this = src;
	return ;
}

Enemy::~Enemy( void ) {
	return ;
}

Enemy &		Enemy::operator=( Enemy const  & rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs.getType();
		this->_hp = rhs.getHP();
	}
	return *this;
}

std::string const &		Enemy::getType(void) const {
	return this->_type;
}

int						Enemy::getHP(void) const {
	return this->_hp;
}

void		Enemy::takeDamage(int damage) {
	if (this->_hp < damage)
		this->_hp = 0;
	else
		this->_hp -= damage;
	return ;
}
