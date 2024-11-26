/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:06:06 by beroy             #+#    #+#             */
/*   Updated: 2024/11/25 17:19:38 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

// Constructors & destructor
Serializer::Serializer(void) {
	std::cout << "Serializer default constructor called!" << std::endl;
}

Serializer::Serializer(const Serializer &copy) {
	std::cout << "Serializer copy constructor called!" << std::endl;
	*this = copy;
}

Serializer::~Serializer(void) {
	std::cout << "Serializer default destructor called!" << std::endl;
}

// Overloaded operators
Serializer &Serializer::operator=(const Serializer &src) {
	(void)src;
	return (*this);
}

// Public methods
uintptr_t	Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
