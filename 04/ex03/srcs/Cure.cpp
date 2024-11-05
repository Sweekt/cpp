/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:30 by beroy             #+#    #+#             */
/*   Updated: 2024/11/05 15:59:14 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure materia default constructor called." << std::endl;
}
Cure::Cure(const Cure &copy) {
	std::cout << "Cure materia copy constructor called." << std::endl;
	*this = copy;
}

Cure::~Cure(void) {
	std::cout << "Cure default destructor called." << std::endl;
}

Cure	&Cure::operator=(const Cure *src) {
	if (this != src)
		this->_type = src->_type;
	return (*this);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getname << "'s wounds *" << std::endl;
}

Cure		*Cure::clone(void) const {
	Cure	*clone = new Cure;
	return (clone);
}
