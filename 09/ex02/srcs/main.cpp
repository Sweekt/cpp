/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:34:41 by beroy             #+#    #+#             */
/*   Updated: 2025/02/06 13:38:54 by beroy            ###   ########.fr       */
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
	std::deque<int>		deq;
	std::clock_t		start, end;
	double 				elapsed;
	if (ac <= 2) {
		std::cout << "Add more params; At least two." << std::endl;
		return (0);
	}
	if (!checkParams(ac, av)) {
		std::cout << "Params should only be numbers!" << std::endl;
		return (0);
	}
	// Initialisation des Arrays
	fillArray(&vec, ac, av);
	fillArray(&deq, ac, av);
	PMergeMe::displayArray(vec, "Before:");
	// Test sur Vector
	start = std::clock();
	PMergeMe::sortVec(vec);
	end = std::clock();
	elapsed = double(end - start);
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << elapsed << " us" << std::endl;
	// Test sur Deque
	start = std::clock();
	PMergeMe::sortDeq(deq);
	end = std::clock();
	elapsed = double(end - start);
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << elapsed << " us" << std::endl;
	return (0);
}
