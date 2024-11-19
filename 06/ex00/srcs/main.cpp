/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:44:48 by beroy             #+#    #+#             */
/*   Updated: 2024/11/19 12:30:42 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "Wrong parameters input. Should be like this: /ScalarConverter <value1 to convert> <value2 to convert> ..." << std::endl;
	for (int i = 1; i < ac; i++)
		ScalarConverter::convert(av[i]);
}
