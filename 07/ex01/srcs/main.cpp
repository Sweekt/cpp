/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:27:17 by beroy             #+#    #+#             */
/*   Updated: 2024/11/28 15:41:08 by beroy            ###   ########.fr       */
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

int	roll(char &c)
{
	if (c == '.')
		c = '-';
	else if (c == '-')
		c = '_';
	else if (c == '_')
		c = '>';
	else if (c == '>')
		c = '.';
	return (0);
}

int main()
{
	char a[] = {'L', 'a', 'p', 'i', 'n'};

	std::cout << "Original: " << a[0] << a[1] << a[2] << a[3] << a[4] << std::endl;
	::iter(a, sizeof(a) / sizeof(char), brainfk);
	std::cout << "Brainfk : " << a[0] << a[1] << a[2] << a[3] << a[4] << std::endl;
	::iter(a, sizeof(a) / sizeof(char), roll);
	std::cout << "Roll    : " << a[0] << a[1] << a[2] << a[3] << a[4] << std::endl;
}