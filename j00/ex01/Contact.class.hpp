/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 18:54:50 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 18:54:52 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class	Contact {

private:
	std::string		_privFname;
	std::string		_privLname;
	std::string		_privNickname;
	std::string		_privLogin;
	std::string		_privPostal;
	std::string		_privEmail;
	std::string		_privPhone;
	std::string		_privBirthday;
	std::string		_privMeal;
	std::string		_privColor;
	std::string		_privSecret;

	int				_privIndex;
	int				_privUse;

	static int		_nbInst;

public:
	Contact(void);
	~Contact(void);

	void	setFname(std::string str);
	void	setLname(std::string str);
	void	setNickname(std::string str);
	void	setLogin(std::string str);
	void	setPostal(std::string str);
	void	setEmail(std::string str);
	void	setPhone(std::string str);
	void	setBirthday(std::string str);
	void	setMeal(std::string str);
	void	setColor(std::string str);
	void	setSecret(std::string str);

	std::string		getFname(void) const;
	std::string		getLname(void) const;
	std::string		getNickname(void) const;
	std::string		getLogin(void) const;
	std::string		getPostal(void) const;
	std::string		getEmail(void) const;
	std::string		getPhone(void) const;
	std::string		getBirthday(void) const;
	std::string		getMeal(void) const;
	std::string		getColor(void) const;
	std::string		getSecret(void) const;

	int		getUse(void) const;
	void	setUse(int use);

	int		getIndex(void) const;

};

#endif
