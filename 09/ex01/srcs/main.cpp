/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:42:08 by beroy             #+#    #+#             */
/*   Updated: 2025/01/14 12:39:14 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int main(int ac, char **av) {
	RPN	polish;
	if (ac != 2) {
		std::cerr << "Wrong input! Run with ./RPN \"<expression>\"" << std::endl;
		return (0);
	}
	std::cout << "---------------Input tests:-------------" << std::endl;
	try {
		std::cout << "Input: " << av[1] << std::endl;
		polish.calculator(av[1]);
		std::cout << "Result: " << polish.get_result() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
//	std::cout << "---------------More tests:--------------" << std::endl;
//	try {
//		std::cout << "Test 1: " << "123++" << std::endl;
//		polish.calculator("123++");
//		std::cout << "Result: " << polish.get_result() << std::endl;
//	}
//	catch (std::exception &e) {
//		std::cerr << "Error: " << e.what() << std::endl;
//	}
//	try {
//		std::cout << "Test 2: " << "123**5+98/-" << std::endl;
//		polish.calculator("123**5+98/-");
//		std::cout << "Result: " << polish.get_result() << std::endl;
//	}
//	catch (std::exception &e) {
//		std::cerr << "Error: " << e.what() << std::endl;
//	}
//	try {
//		std::cout << "Test 3: " << "1234/" << std::endl;
//		polish.calculator("1234/");
//		std::cout << "Result: " << polish.get_result() << std::endl;
//	}
//	catch (std::exception &e) {
//		std::cerr << "Error: " << e.what() << std::endl;
//	}
//	try {
//		std::cout << "Test 5: " << "++45-88" << std::endl;
//		polish.calculator("++45-88");
//		std::cout << "Result: " << polish.get_result() << std::endl;
//	}
//	catch (std::exception &e) {
//		std::cerr << "Error: " << e.what() << std::endl;
//	}
//	std::cout << "----------------------------------------" << std::endl;
	return (0);
}