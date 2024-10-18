/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:08:04 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:13:03 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &copy) {
	std::cout << "Cat copy constructor called." << std::endl;
	*this = copy;
}

Cat::~Cat(void) {
	std::cout << "Cat default destructor called." << std::endl;
}

Cat	&Cat::operator=(const Cat &src) {
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow meow meoooow. Gimme food human!" << std::endl;
}
