/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:39:53 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:01:58 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal type constructor called." << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor called." << std::endl;
}

Animal	&Animal::operator=(const Animal &src) {
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string	Animal::getType() const {
	return (this->_type);
}

void	Animal::makeSound() const {
	std::cout << "Miaouff ?! Idk the default animal sound." << std::endl;
}
