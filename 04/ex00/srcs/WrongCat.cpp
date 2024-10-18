/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:08:04 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:13:03 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat default destructor called." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &src) {
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "Meow meow meoooow. Gimme food human!" << std::endl;
}
