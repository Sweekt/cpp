/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:52:01 by beroy             #+#    #+#             */
/*   Updated: 2025/01/10 12:41:54 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
# include <list>
# include <iostream>
# include <vector>
int main() {
	std::vector<int> number;
	number.push_back(10);
	number.push_back(42);
	number.push_back(-55);
//print list of integers
	int i = 0;

	std::cout << "Numbers are: " << std::endl;
	for (std::vector<int>::iterator it = number.begin(); it != number.end(); ++it) {
		std::cout << "At [" << i << "]= " << *it << std::endl;
		i++;
	}
//find first occurence
	try {
		::easyfind(number, 70);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
