/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:01:45 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 13:06:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A.hpp"

// Constructors & destructor
A::A(void) : Base() {
	std::cout << "A default constructor called!" << std::endl;
}

A::A(const A &copy) : Base() {
	std::cout << "A copy constructor called!" << std::endl;
	*this = copy;
}

A::~A(void) {
	std::cout << "A default destructor called!" << std::endl;
}

// Overloaded operators
A &A::operator=(const A &src) {
	(void) src;
	return (*this);
}

// Public methods
