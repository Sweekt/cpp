/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:42:08 by beroy             #+#    #+#             */
/*   Updated: 2025/01/13 19:53:27 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int main(int ac, char **av) {
	RPN	polish;
	if (ac != 2) {
		std::cout << "Wrong input! Run with ./RPN \"<expression>\"" << std::endl;
		return (0);
	}
	try {
		polish.calculator(av[1]);
		std::cout << "Result: " << polish.get_result() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}