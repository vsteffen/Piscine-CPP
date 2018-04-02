#include <iostream>
#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

Character::Character (void) : _name("NoName"), _ap(40), _weapon(NULL) {
	return ;
}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL) {
	return ;
}

Character::Character ( Character const & src ) {
	*this = src;
	return ;
}

Character::~Character( void ) {
	return ;
}

Character &		Character::operator=( Character const  & rhs ) {
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_ap = rhs.getAP();
		this->_weapon = rhs.getWeapon();
	}
	return *this;
}

void	Character::recoverAP(void) {
	if (this->_ap + 10 > 40)
		this->_ap = 40;
	else
		this->_ap += 10;
	return ;
}

void	Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
	return ;
}

void	Character::attack(Enemy *enemy) {
	if (enemy != NULL) {
		if (this->_ap >= this->_weapon->getAPCost()) {
			this->_ap -= this->_weapon->getAPCost();
			enemy->takeDamage(this->_weapon->getDamage());
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
			this->_weapon->attack();
			if (enemy->getHP() == 0) {
				delete enemy;
				enemy = NULL;
			}
		}
		else
			std::cout << "Not enought AP to use " << this->_weapon->getName() << std::endl;
		return ;
	}
	std::cout << "Invalid target." << std::endl;
}

std::string	const &		Character::getName(void) const {
	return this->_name;
}

int						Character::getAP(void) const {
	return this->_ap;
}

AWeapon	*				Character::getWeapon(void) const {
	return this->_weapon;
}

std::ostream &		operator<<( std::ostream & o, Character const & i ) {
	if (i.getWeapon() != NULL)
		o << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
	return o;
}
