/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:18:17 by beroy             #+#    #+#             */
/*   Updated: 2025/01/16 19:24:42 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"

AMateria::AMateria(void) : _type("untyped") {
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = copy;
}

AMateria::AMateria(const std::string &type) : _type(type) {
	std::cout << "AMateria type constructor called." << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria default destructor called." << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &src) {
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

const std::string	&AMateria::getType() const {
	return (this->_type);
}

void		AMateria::use(ICharacter& target) {
	std::cout << "* does nothing at " << target.getName() << " *" << std::endl;
}
