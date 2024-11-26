/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:00:35 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 13:06:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/B.hpp"

// Constructors & destructor
B::B(void) : Base() {
	std::cout << "B default constructor called!" << std::endl;
}

B::B(const B &copy) : Base() {
	std::cout << "B copy constructor called!" << std::endl;
	*this = copy;
}

B::~B(void) {
	std::cout << "B default destructor called!" << std::endl;
}

// Overloaded operators
B &B::operator=(const B &src) {
	(void) src;
	return (*this);
}

// Public methods
