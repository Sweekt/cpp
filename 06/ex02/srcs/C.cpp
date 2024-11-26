/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:59:30 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 13:01:18 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/C.hpp"

// Constructors & destructor
C::C(void) : Base() {
	std::cout << "C default constructor called!" << std::endl;
}

C::C(const C &copy) : Base() {
	std::cout << "C copy constructor called!" << std::endl;
	*this = copy;
}

C::~C(void) {
	std::cout << "C default destructor called!" << std::endl;
}

// Overloaded operators
C &C::operator=(const C &src) {
	(void)src;
	return (*this);
}

// Public methods
