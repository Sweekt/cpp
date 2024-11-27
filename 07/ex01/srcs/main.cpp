/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:27:17 by beroy             #+#    #+#             */
/*   Updated: 2024/11/27 16:54:37 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"
#include <cstdlib>

void	brainfk(char &c)
{
	if (c % 4 == 0)
		c = '-';
	else if (c % 4 == 1)
		c = '_';
	else if (c % 4 == 2)
		c = '>';
	else if (c % 4 == 3)
		c = '.';
}

void	roll(char &c)
{
	if (c == '.')
		c = '-';
	else if (c == '-')
		c = '_';
	else if (c == '_')
		c = '>';
	else if (c == '>')
		c = '.';
}

int main()
{
	char str[] = "J'aime pas trop les lentilles corail.";

	std::cout << "Initial string: " << str << std::endl;
	iter(str, sizeof(str) / sizeof(char), brainfk);
	std::cout << std::endl << "String after brainfking: " << str << std::endl;
	iter(str, sizeof(str) / sizeof(char), roll);
	std::cout << std::endl << "String after roll: " << str << std::endl;
}