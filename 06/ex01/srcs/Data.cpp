/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:14:26 by beroy             #+#    #+#             */
/*   Updated: 2024/11/25 17:30:47 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"

// Constructors & destructor
Data::Data(void) : _i(42), _str("I'm useless!") {
	std::cout << "Data default constructor called!" << std::endl;
}

Data::Data(const Data &copy) {
	std::cout << "Data copy constructor called!" << std::endl;
	*this = copy;
}

Data::~Data(void) {
	std::cout << "Data default destructor called!" << std::endl;
}

// Overloaded operators
Data &Data::operator=(const Data &src) {
	if (this != &src)
	{
		this->_i = src._i;
		this->_str = src._str;
	}
	return (*this);
}

// Setters & getters
int 		Data::get_i(void) const {
	return (this->_i);
}

std::string	Data::get_str(void) const {
	return (this->_str);
}