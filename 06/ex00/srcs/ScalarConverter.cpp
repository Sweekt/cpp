/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:18:19 by beroy             #+#    #+#             */
/*   Updated: 2024/11/25 16:45:15 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

// Constructors & destructor
ScalarConverter::ScalarConverter(void) {
	std::cout << "ScalarConverter default constructor called!" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	std::cout << "ScalarConverter copy constructor called!" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter(void) {
	std::cout << "ScalarConverter default destructor called!" << std::endl;
}

// Overloaded operators
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {
	(void)src;
	return (*this);
}

// Private methods
bool	ScalarConverter::isChar(const std::string &input) {
	if (input.size() == 3 && input.c_str()[0] == 39 && input.c_str()[2] == 39)
		return (1);
	return (0);
}

bool	ScalarConverter::isInt(const std::string &input) {
	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (i == 0 && (std::isdigit(input.c_str()[i]) == 0 && input.c_str()[i] != '-'))
			return (0);
		if (i > 0 && std::isdigit(input.c_str()[i]) == 0)
			return (0);
	}
	return (1);
}

bool	ScalarConverter::isFloat(const std::string &input) {
	bool	dot = false;

	for (unsigned int i = 0; i < input.size() - 1; i++)
	{
		if (i == 0 && std::isdigit(input.c_str()[i]) == 0 && input.c_str()[i] != '-')
			return (0);
		if (i != 0 && std::isdigit(input.c_str()[i]) == 0)
		{
			if (input.c_str()[i] == '.' && !dot)
				dot = true;
			else if (input.c_str()[i] == '.' && dot)
				return (0);
			else
				return (0);
		}
	}
	if (input.c_str()[input.size() - 1] == 'f')
		return (1);
	return (0);
}

bool	ScalarConverter::isDouble(const std::string &input) {
	bool	dot = false;

	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (i == 0 && std::isdigit(input.c_str()[i]) == 0 && input.c_str()[i] != '-')
			return (0);
		if (i != 0 && std::isdigit(input.c_str()[i]) == 0)
		{
			if (input.c_str()[i] == '.' && !dot)
				dot = true;
			else if (input.c_str()[i] == '.' && dot)
				return (0);
			else
				return (0);
		}
	}
	return (1);
}

bool	ScalarConverter::specCase(const std::string &input) {
	if (input == "nan" || input == "+inf" || input == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
		return (1);
	}
	if (input == "+inff" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input.substr(0, 4)<< std::endl;
		return (1);
	}
	if (input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input.substr(0, 3)<< std::endl;
		return (1);
	}
	return (0);
}

void	ScalarConverter::print_types(char c, int i, float f, double d) {
	if (i > 127 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else if (i < 9 || (i > 11 && i < 32) || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (f < 1000000 && f > -1000000 && i - d == 0)
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

// Public methods
void	ScalarConverter::convert(const std::string &input) {

	if (isInt(input))
	{
		std::cout << "Input is Int type" << std::endl;
		long int	i = strtol(input.c_str(), NULL, 10);
		print_types(static_cast<int>(i), i, static_cast<float>(i), static_cast<double>(i));
	}
	else if (isChar(input))
	{
		std::cout << "Input is Char type" << std::endl;
		char	c = input.c_str()[1];
		print_types(c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
	}
	else if (isDouble(input))
	{
		std::cout << "Input is Double type" << std::endl;
		double	d = strtod(input.c_str(), NULL);
		print_types(static_cast<int>(d), static_cast<int>(d), static_cast<float>(d), d);
	}
	else if (isFloat(input))
	{
		std::cout << "Input is Float type" << std::endl;
		float	f = strtof(input.c_str(), NULL);
		print_types(static_cast<int>(f), static_cast<int>(f), f, static_cast<double>(f));
	}
	else if (specCase(input) == 1)
		;
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
