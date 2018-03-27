/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 18:47:56 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 18:47:57 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Contact.class.hpp"

void	print_search_user(Contact contact) {
	std::string str;

	std::cout << "|";
	str = std::to_string(contact.getIndex());

	if (str.length() > 9)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";

	str = contact.getFname();
	if (str.length() > 9)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";

	str = contact.getLname();
	if (str.length() > 9)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";

	str = contact.getNickname();
	if (str.length() > 9)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|" << std::endl;
}

void	print_search(Contact contact[8]) {
	std::cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	std::cout << "|     index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (contact[i].getUse() == 1)
			print_search_user(contact[i]);
	}

	std::cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
}

void print_info_user(Contact contact) {
	if (contact.getUse() == 0) {
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << "First name: " << contact.getFname() << std::endl;
	std::cout << "Last name: " << contact.getLname() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Login: " << contact.getLogin() << std::endl;
	std::cout << "Postal address: " << contact.getPostal() << std::endl;
	std::cout << "Email: " << contact.getEmail() << std::endl;
	std::cout << "Phone: " << contact.getPhone() << std::endl;
	std::cout << "Birthday date: " << contact.getBirthday() << std::endl;
	std::cout << "Favorite meal: " << contact.getMeal() << std::endl;
	std::cout << "Underwear color: " << contact.getColor() << std::endl;
	std::cout << "Darkest secret: " << contact.getSecret() << std::endl << std::endl;
}

void get_new_user(Contact *contact, int index) {
	std::string		buff;

	contact->setUse(1);
	(void)index;
	// contact->setIndex(index);

	std::cout << "Enter first name:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setFname(buff);

	std::cout << "Enter last name:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setLname(buff);

	std::cout << "Enter nickname:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setNickname(buff);

	std::cout << "Enter login:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setLogin(buff);

	std::cout << "Enter postal address:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setPostal(buff);

	std::cout << "Enter email:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setEmail(buff);

	std::cout << "Enter phone number:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setPhone(buff);

	std::cout << "Enter birthday date:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setBirthday(buff);

	std::cout << "Enter favorite meal:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setMeal(buff);

	std::cout << "Enter underwear color:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setColor(buff);

	std::cout << "Enter darkest secret:" << std::endl;
	if (!(std::getline(std::cin, buff) && !std::cin.eof()))
		return ;
	contact->setSecret(buff);
}

int		main(void) {
	std::string		buff;
	Contact			contact[8];
	int				index = 0;
	int				debug = 0;

	std::cout << "Hello ! Welcome on this fabulous phonebook. What do you want to do ?" << std::endl;
	while (std::getline(std::cin, buff) && !std::cin.eof())
	{
		for (std::string::size_type i = 0; i < buff.length(); i++)
			buff[i] = toupper(buff[i]);
		if (buff.compare(std::string("ADD")) == 0)
		{
			if (index >= 8) {
				std::cout << "Sorry, you can't add more than 8 contacts" << std::endl;
			}
			else {
				get_new_user(&contact[index], index);
				index++;
			}

		}
		else if (buff.compare(std::string("SEARCH")) == 0)
		{
			if (index == 0)
				std::cout << "No entry. Please add an user." << std::endl;
			else {
				print_search(contact);
				std::cout << "Choose index:" << std::endl;
				if (std::getline(std::cin, buff) && !std::cin.eof())
				{
					const char *array = buff.c_str();
					int number = atoi(array);
					if (number < 0 || number > 7 || (number == 0 && array[0] != '0'))
						std::cout << "Invalid index." << std::endl;
					else
						print_info_user(contact[number]);
				}
				debug = 1;
			}
		}
		else if (buff.compare(std::string("HELP")) == 0)
		{
			std::cout << "Command: ADD / SEARCH / EXIT" << std::endl;
		}
		else if (buff.compare(std::string("EXIT")) == 0)
		{
			break;
		}
		else
		{
			std::cout << "Unknown command \"" << buff <<  "\". Type HELP if you need" << std::endl;
		}
		std::cout << "What do you want to do ?" << std::endl;
	}
	std::cout << "Goodbye ! " << std::endl;
	return 0;
}
