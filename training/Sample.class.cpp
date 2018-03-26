/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:27:45 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 13:27:47 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;
	this->bar();
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Sample::bar(void) {
	std::cout << "Member function bar called" << std::endl;
	return ;
}
