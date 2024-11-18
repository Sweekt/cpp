/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:18:14 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 17:00:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter
{
private :
	// Constructors & destructor
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	~ScalarConverter();

	// Overloaded operators
	ScalarConverter &operator=(const ScalarConverter &src);
public :
	// Public methods
	static void	convert(const std::string &input);
};

#endif
