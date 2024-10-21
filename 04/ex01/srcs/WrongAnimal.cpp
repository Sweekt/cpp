/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:39:53 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:01:58 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal type constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src) {
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "Miaouff ?! Idk the default WrongAnimal sound." << std::endl;
}
