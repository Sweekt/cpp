/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:17:07 by beroy             #+#    #+#             */
/*   Updated: 2024/10/01 17:19:50 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <readline/readline.h>

int	main(int ac, char **av)
{
	std::string	str;

	if (ac < 1)
		return (0);
	while (42)
	{
		std::cout << "PICK: ADD, SEARCH OR EXIT:" << std::endl << "> ";
		std::getline(std::cin, str);
		if (str == "ADD")
			std::cout << "aaa" << std::endl;
		if (str == "SEARCH")
			std::cout << "bbb" << std::endl;
		if (str == "EXIT")
			break ;
	}
	return (0);
}