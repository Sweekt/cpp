/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:08:04 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:16:05 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &copy) {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
}

Dog::~Dog(void) {
	std::cout << "Dog default destructor called." << std::endl;
}

Dog	&Dog::operator=(const Dog &src) {
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouf wouf wouuuuuf. Can we go out human ???" << std::endl;
}
