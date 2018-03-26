/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:59:31 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 14:59:33 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

class Sample2 {

public:
	char	a1;
	int		a2;
	float	a3;

	Sample2(char p1, int p2, float p3);
	~Sample2(void);
};

struct Sample3 {

// public: <-- par défault !
	char	a1;
	int		a2;
	float	a3;

	Sample3(char p1, int p2, float p3);
	~Sample3(void);
};

#endif
