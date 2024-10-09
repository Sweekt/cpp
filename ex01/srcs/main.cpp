/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:17:07 by beroy             #+#    #+#             */
/*   Updated: 2024/10/03 14:58:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

int	main(void)
{
	std::string	str;
	Phonebook	phonebook;

	while (42)
	{
		std::cout << "PICK: ADD, SEARCH OR EXIT:" << std::endl << "> ";
		std::getline(std::cin, str);
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Command not found!" << std::endl;
	}
	return (0);
}
