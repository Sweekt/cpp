/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:32:03 by beroy             #+#    #+#             */
/*   Updated: 2025/01/10 19:14:22 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <fstream>
#include <sstream>


std::map<std::string, float>	map_init(void) {
	std::map<std::string, float> myMap;
	std::ifstream inputFile("../data.csv");

	if (!inputFile)
		throw (std::exception());
	std::string line;
	while (std::getline(inputFile, line)) {
		std::stringstream ss(line);
		std::string key;
		float value;

		if (std::getline(ss, key, ',') && ss >> value) {
			myMap[key] = value;
		}
		else {
			throw (std::exception());
		}
	}
	return (myMap);
}

// Constructors & destructor
BitcoinExchange::BitcoinExchange(void) : _btcvalue(map_init()) {
	std::cout << "BitcoinExchange default constructor called!" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	std::cout << "BitcoinExchange copy constructor called!" << std::endl;
	*this = copy;
}

BitcoinExchange::~BitcoinExchange(void) {
	std::cout << "BitcoinExchange default destructor called!" << std::endl;
}

// Overloaded operators
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src) {
	if (this != &src) {
		this->_btcvalue = src._btcvalue;
	}
	return (*this);
}

// Public methods
