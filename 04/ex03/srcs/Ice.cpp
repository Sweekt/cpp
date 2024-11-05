/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:47:21 by beroy             #+#    #+#             */
/*   Updated: 2024/11/05 14:32:11 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice materia default constructor called." << std::endl;
}
Ice::Ice(const Ice &copy) {
	std::cout << "Ice materia copy constructor called." << std::endl;
	*this = copy;
}

Ice::~Ice(void) {
	std::cout << "Ice default destructor called." << std::endl;
}

Ice	&Ice::operator=(const Ice *src) {
	if (this != src)
		this->_type = src->_type;
	return (*this);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getname << " *" << std::endl;
}

Ice		*Ice::clone(void) const {
	Ice	*clone = new Ice;
	return (clone);
}
