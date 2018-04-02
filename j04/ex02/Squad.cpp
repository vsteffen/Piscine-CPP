#include <iostream>
#include "Squad.class.hpp"

Squad::Squad (void) : _count( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	this->_list = NULL;
	this->_list->_next = NULL;
	return ;
}

Squad::Squad( int const n ) : _nbCount( n ) {
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

Squad::Squad ( Squad const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Squad::~Squad( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Squad &		Squad::operator=( Squad const  & rhs ) {
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_foo = rhs.getFoo();
	return *this;
}

int				getCount(void) const {
	t_list		*current = this->_list;
	int			count = 0;

	while (current) {
		count++;
		current = current->next;
	}
	return count;
}

ISpaceMarine* 	getUnit(int nSquad) const {
	if (nSquad < 0)
		return NULL;

	t_list		*ptr = this->_list;
	int			i = 0;

	while (ptr && i < nSquad) {
		i++;
		ptr = ptr->next;
	}
	if (ptr)
		return i;
	return NULL;
}

int 			push(ISpaceMarine* addMarine) {
	t_list		*current;
	int			i = 1;

	current = this->_list;
	while (current) {
		i++;
		current = current->next;
	}
	current->next = addMarine;
	return 	i;
}


static int			_nbCount = 0;
