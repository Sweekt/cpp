/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:32:03 by beroy             #+#    #+#             */
/*   Updated: 2025/01/13 17:42:02 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

std::map<std::string, float>	map_init(std::string file) {
	std::map<std::string, float> myMap;
	std::ifstream inputFile(file.c_str());

	if (!inputFile)
		throw (std::exception());
	std::string line;
	std::getline(inputFile, line);
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
BitcoinExchange::BitcoinExchange(void) {
	std::cout << "BitcoinExchange default constructor called!" << std::endl;
	try {
		_btcvalue = map_init("data.csv");
	}
	catch (std::exception) {
		std::cout << "File not found or failed to open!" << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(std::string file) {
	std::cout << "BitcoinExchange default constructor called!" << std::endl;
	try {
		_btcvalue = map_init(file);
	}
	catch (std::exception) {
		std::cout << "File not found or failed to open!" << std::endl;
	}
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
float	BitcoinExchange::Get_Btc_Value(std::string date) {
	std::map<std::string, float>::iterator	it;

	it = this->_btcvalue.find(date);
	if (it == this->_btcvalue.end() || it->second == -1.0) {
		this->_btcvalue[date] = -1.0;
		it = this->_btcvalue.find(date);
		it--;
	}
	return (it->second);
}
