/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:59:26 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 14:59:27 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

class Sample1 {

private:
	int			_privateFoo;
	void		_privateBar(void) const;
	static int	_nbInst;

public:
	char		a1;
	int			a2;
	float const	pi;

	Sample1(char p1, int p2, float const p3);
	~Sample1(void);

	int		getFoo(void) const ;
	void	setFoo(int p);

	int 	compare(Sample1 * other) const ;

	static int	getNbInst(void);

	void	bar(void) const;
};

#endif
