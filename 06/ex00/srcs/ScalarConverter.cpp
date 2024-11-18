/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:18:19 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 16:26:59 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

// Constructors & destructor
ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter default constructor called!" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	std::cout << "ScalarConverter copy constructor called!" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter default destructor called!" << std::endl;
}

// Overloaded operators
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
	if (this != &src)
	{
	}
	return (*this);
}

// Public methods
