/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_and_instance.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:30:23 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/26 13:31:57 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int		main(void) {

	Sample		instance;

	instance.foo = 42;
	std::cout << "instane.foo: " << instance.foo << std::endl;
	instance.bar();

	Sample1		instance1('a', 42, 3.14f);
	instance1.bar();

	instance1.setFoo(42);
	instance1.getFoo();

	Sample1		instance1Bis('q', 42, 3.14f);
	instance1Bis.setFoo(99);

	if (instance1.compare(&instance1Bis) != 0)
	 	std::cout << "Structure instance1 an instance2Bis aren't physically equal" << std::endl;

	std::cout << "Number of instance(s) -> " << Sample1::getNbInst() << std::endl;

	Sample1 *	instanceP = &instance1;

	int			Sample1::*p = NULL;
	int			(Sample1::*f)( void ) const;

	p = &Sample1::a2;

	std::cout << "In instance1, a2 equal " << instance1.a2 << std::endl;
	instance1.*p = 21;
	std::cout << "In instance1, a2 equal " << instance1.a2 << std::endl;
	instanceP->*p = 42;
	std::cout << "In instance1, a2 equal " << instance1.a2 << std::endl;

	f = &Sample1::getFoo;
	(instance1.*f)();
	(instanceP->*f)();

	Sample2		instance2('a', 42, 4.2f);

	return 0;
}
