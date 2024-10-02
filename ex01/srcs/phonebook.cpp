/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:27:55 by beroy             #+#    #+#             */
/*   Updated: 2024/10/02 17:33:49 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Welcome to this amazing Phonebook!" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Goodbye!" << std::endl;
}

void	Phonebook::add(void)
{

}

void	Phonebook::search(void)
{

}

void	Phonebook::print(Contact contact)
{
	std::cout << "First name:" << contact.get_fname() << std::endl;
	std::cout << "Last name:" << contact.get_lname() << std::endl;
	std::cout << "Nickname:" << contact.get_nick() << std::endl;
	std::cout << "Phone number:" << contact.get_phone_num() << std::endl;
	std::cout << "Darkest secret:" << contact.get_secret() << std::endl;
}

/*Contact	Phonebook::get_contact(int index)
{

}
*/