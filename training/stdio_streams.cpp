/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_streams.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:03:49 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 13:03:50 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	char	buff[1];

	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
}
