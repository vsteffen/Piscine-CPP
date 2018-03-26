/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 18:54:45 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 18:54:46 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
	this->_privUse = 0;
	this->_privIndex = this->_nbInst;
	this->_nbInst++;
}

Contact::~Contact(void) {
}

void	Contact::setFname(std::string str) {
	this->_privFname = str;
	return ;
}
void	Contact::setLname(std::string str) {
	this->_privLname = str;
	return ;
}
void	Contact::setNickname(std::string str) {
	this->_privNickname = str;
	return ;
}
void	Contact::setLogin(std::string str) {
	this->_privLogin = str;
	return ;
}
void	Contact::setPostal(std::string str) {
	this->_privPostal = str;
	return ;
}
void	Contact::setEmail(std::string str) {
	this->_privEmail = str;
	return ;
}
void	Contact::setPhone(std::string str) {
	this->_privPhone = str;
	return ;
}
void	Contact::setBirthday(std::string str) {
	this->_privBirthday = str;
	return ;
}
void	Contact::setMeal(std::string str) {
	this->_privMeal = str;
	return ;
}
void	Contact::setColor(std::string str) {
	this->_privColor = str;
	return ;
}
void	Contact::setSecret(std::string str) {
	this->_privSecret = str;
	return ;
}

std::string		Contact::getFname(void) const {
	return this->_privFname;
}

std::string		Contact::getLname(void) const {
	return this->_privLname;
}

std::string		Contact::getNickname(void) const {
	return this->_privNickname;
}

std::string		Contact::getLogin(void) const {
	return this->_privLogin;
}

std::string		Contact::getPostal(void) const {
	return this->_privPostal;
}

std::string		Contact::getEmail(void) const {
	return this->_privEmail;
}

std::string		Contact::getPhone(void) const {
	return this->_privPhone;
}

std::string		Contact::getBirthday(void) const {
	return this->_privBirthday;
}

std::string		Contact::getMeal(void) const {
	return this->_privMeal;
}

std::string		Contact::getColor(void) const {
	return this->_privColor;
}

std::string		Contact::getSecret(void) const {
	return this->_privSecret;
}

int		Contact::getIndex(void) const {
	return this->_privIndex;
}

int		Contact::getUse(void) const {
	return this->_privUse;
}

void	Contact::setUse(int use) {
	this->_privUse = use;
	return ;
}

int		Contact::_nbInst = 0;
