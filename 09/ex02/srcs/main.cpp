/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:34:41 by beroy             #+#    #+#             */
/*   Updated: 2025/02/06 13:08:40 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PMergeMe.hpp"

template <typename T>
void	fillArray(T *array, int ac, char **av) {
	for (int i = 1; i < ac; i++) {
		array->push_back(atol(av[i]));
	}
}

bool isNumber(const std::string &str) {
	bool	sign = false;
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		if (!sign && (*it == '-' || *it == '+'))
			sign = true;
		else if (sign && (*it == '-' || *it == '+'))
			return (false);
		else if (!std::isdigit(*it))
			return (false);
	}
	return (true);
}

bool checkParams(int ac, char** av) {
	for (int i = 1; i < ac; i++) {
		if (!isNumber(av[i])) {
			return (false);
		}
	}
	return (true);
}

int main(int ac, char **av) {
	std::vector<int>	vec;

	if (ac <= 2) {
		std::cout << "Add more params; At least two." << std::endl;
		return (0);
	}
	if (!checkParams(ac, av)) {
		std::cout << "Params should only be numbers!" << std::endl;
		return (0);
	}
	fillArray(&vec, ac, av);
	PMergeMe::sortVec(vec);
	return (0);
}