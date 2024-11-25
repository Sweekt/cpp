/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:18:14 by beroy             #+#    #+#             */
/*   Updated: 2024/11/25 15:58:46 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <limits>

class ScalarConverter
{
private :
	// Constructors & destructor
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	~ScalarConverter();

	// Overloaded operators
	ScalarConverter &operator=(const ScalarConverter &src);

	// Private methods
	static bool	isChar(const std::string &input);
	static bool	isInt(const std::string &input);
	static bool	isFloat(const std::string &input);
	static bool	isDouble(const std::string &input);
	static bool	specCase(const std::string &input);
	static void	print_types(char c, int i, float f, double d);
public :
	// Public methods
	static void	convert(const std::string &input);
};

#endif
