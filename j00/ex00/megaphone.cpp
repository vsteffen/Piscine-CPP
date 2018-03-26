/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:16:50 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 17:18:47 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int		main(int ac, char **av) {
	(void)av;
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else if (ac > 1) {
		std::string		output;
		output = av[1];
		for (int i = 2; i < ac; i++)
		{
			output += " " + std::string(av[i]);
		}
		for (std::string::size_type i = 0; i < output.length(); i++)
			output[i] = toupper(output[i]);
		std::cout << output << std::endl;
	}
	return 0;
}
