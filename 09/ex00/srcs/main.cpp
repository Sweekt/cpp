/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:31:27 by beroy             #+#    #+#             */
/*   Updated: 2025/01/14 12:13:20 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <sstream>
#include <cctype>
#include <cstdlib>

bool isLeapYear(int year) {
	return (year % 4 == 0);
}

bool isValidDate(int day, int month, int year) {
	if (year < 0 || month < 1 || month > 12 || day < 1) {
		return (false);
	}
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isLeapYear(year)) {
		daysInMonth[1] = 29;
	}
	return (day <= daysInMonth[month - 1]);
}

bool isValidDateString(const std::string& date) {
	if (date.size() != 11) {
		return (false);
	}
	for (size_t i = 0; i < date.size() - 1; ++i) {
		if ((i == 4 || i == 7)) {
			if (date[i] != '-') {
				return (false);
			}
		}
		else if (!isdigit(date[i])) {
			return (false);
		}
	}
	int day = std::atoi(date.substr(8, 9).c_str());
	int month = std::atoi(date.substr(6, 7).c_str());
	int year = std::atoi(date.substr(0, 5).c_str());
	return (isValidDate(day, month, year));
}

void	check_key(std::string key) {
	if (!isValidDateString(key))
		throw (IncorrectDate());
}

void	check_value(float value) {
	if (value < 0)
		throw (NotAPositive());
	else if (value >= 2147483648)
		throw (TooLarge());
}

bool	check_ext(std::string filename, std::string ext) {
	size_t	pos = filename.find(ext);

	if (pos != filename.size() - ext.size() || pos == std::string::npos)
		return (false);
	return (true);
}

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Wrong input! Run with ./BitcoinExchange <filename.txt>." << std::endl;
		return (0);
	}
	BitcoinExchange	btc("data.csv");
	std::string		filename(av[1]);
	if (!check_ext(filename, ".txt")) {
		std::cerr << "Wrong file extension!" << std::endl;
		return (0);
	}
	std::ifstream	inputFile(filename.c_str());
	std::string		line;

	if (!inputFile) {
		std::cerr << "File failed to open!" << std::endl;
		return (0);
	}
	std::getline(inputFile, line);
	while (std::getline(inputFile, line)) {
		std::stringstream ss(line);
		std::string key;
		float value;

		if (std::getline(ss, key, '|') && ss >> value) {
			try {
				check_value(value);
				check_key(key);
				std::cout << key << "=> " << value << " = " << value * btc.Get_Btc_Value(key) << std::endl;
			}
			catch (std::exception &e) {
				std::cerr << "Error: " << e.what() << std::endl;
			}
		}
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
}

