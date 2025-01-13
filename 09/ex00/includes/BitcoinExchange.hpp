/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:31:48 by beroy             #+#    #+#             */
/*   Updated: 2025/01/13 17:59:48 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
private :
	std::map<std::string, float>	_btcvalue;
public :
	// Constructors & destructor
	BitcoinExchange();
	BitcoinExchange(std::string file);
	BitcoinExchange(const BitcoinExchange &copy);
	~BitcoinExchange();

	// Overloaded operators
	BitcoinExchange &operator=(const BitcoinExchange &src);

	// Public methods
	float	Get_Btc_Value(std::string date);

	// Exception
	class DateNotFound : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return ("Date not found in the database!");
		}
	};
};

class NotAPositive: public std::exception {
public:
	virtual const char	*what() const throw() {
		return ("not a positive number.");
	}
};

class TooLarge: public std::exception {
public:
	virtual const char	*what() const throw() {
		return ("too large a number.");
	}
};

class IncorrectDate: public std::exception {
public:
	virtual const char	*what() const throw() {
		return ("date format is incorrect.");
	}
};
#endif
