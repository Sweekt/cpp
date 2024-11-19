/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:18:14 by beroy             #+#    #+#             */
/*   Updated: 2024/11/19 15:13:44 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>

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
	bool	isChar(const std::string &input);
	bool	isInt(const std::string &input);
	bool	isFloat(const std::string &input);
	bool	isDouble(const std::string &input);
public :
	// Public methods
	static void	convert(const std::string &input);
};

#endif
