/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:08:04 by beroy             #+#    #+#             */
/*   Updated: 2024/10/24 12:04:54 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain) {
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &copy) {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = copy;
}

Dog::~Dog(void) {
	std::cout << "Dog default destructor called." << std::endl;
	delete _brain;
}

Dog	&Dog::operator=(const Dog &src) {
	if (this != &src)
	{
		this->_type = src._type;
		if (this->_brain)
			delete _brain;
		this->_brain = new Brain(src._brain);
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouf wouf wouuuuuf. Can we go out human ???" << std::endl;
}
