/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:52:34 by beroy             #+#    #+#             */
/*   Updated: 2025/01/10 15:30:34 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <time.h>
#include <cstdlib>

int main(void) {
	Span	aSpan(10);
	Span	bSpan(2);
	srand((unsigned)time(NULL));

	// Test with an empty span
	try {
		aSpan.shortestSpan();
	}
	catch (std::exception) {
		std::cout << "This should be printed!" << std::endl;
	}
	// Initializing the spans
	for (size_t i = 0; i < 200; i++) {
		try {
			aSpan.addNumber(rand() % 200);
		}
		catch (std::exception) {
			std::cout << "Span is full!" << std::endl;
			break ;
		}
	}
	// Testing the copy operator
	std::cout << "aSpan :" << std::endl;
	aSpan.printVec();
	bSpan = aSpan;
	std::cout << "bSpan :" << std::endl;
	bSpan.printVec();
	// Testing the span finding functions
	std::cout << "Shortest span:" << bSpan.shortestSpan() << std::endl;
	std::cout << "Longest span:" << bSpan.longestSpan() << std::endl;
}
