/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:18:19 by beroy             #+#    #+#             */
/*   Updated: 2024/11/19 15:38:12 by beroy            ###   ########.fr       */
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
	(void)src;
	return (*this);
}

// Private methods
bool	ScalarConverter::isChar(const std::string &input) {
	return (input.size() == 3 && input.c_str()[0] == '\'' && input.c_str()[2] == '\'');
}

bool	ScalarConverter::isInt(const std::string &input) {
	for (int i = 0; i < input.size(); i++)
		if (std::isdigit(input.c_str()[i]) == 0)
			return (0);

}

bool	ScalarConverter::isFloat(const std::string &input) {

}

bool	ScalarConverter::isDouble(const std::string &input) {

}

// Public methods
void	ScalarConverter::convert(const std::string &input) {
	double	d;

	d = strtod(input.c_str(), NULL);
}