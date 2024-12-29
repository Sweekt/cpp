/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:52:01 by beroy             #+#    #+#             */
/*   Updated: 2024/12/29 17:54:17 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main() {
//init vector
	std::vector<int> number;
	int tab[] = {1, 100, 70, 7010, 70};
	number.insert(number.end(), tab, tab + 5);
//print list of integers
	std::vector<int>::iterator it;
	std::vector<int>::iterator ite = number.end();
	int i = 0;

	std::cout << "Numbers are: " << std::endl;
	for (it = number.begin(); it != ite; ++it) {
		std::cout << "At [" << i << "]= " << *it << std::endl;
		i++;
	}
//find first occurence with integers
	try {
		std::vector<int>::const_iterator retu = easyfind(number, 70);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
//find first occurence with strings
//	std::vector<int> chr;
//	std::string str = "hellloooo";
//	chr.insert(chr.end(), str, str + 5);
//	try {
//		find_or_not(str, 'h');
//	}
//	catch (std::exception &e) {
//		std::cout << e.what() << std::endl;
//	}
	return 0;
}