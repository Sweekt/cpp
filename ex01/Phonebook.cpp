/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:27:55 by beroy             #+#    #+#             */
/*   Updated: 2024/09/24 17:28:22 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
	std::cout << "First name:" << this->_fname << std::endl;
	std::cout << "Last name:" << this->_lname << std::endl;
	std::cout << "Nickname:" << this->_nick << std::endl;
	std::cout << "Phone number:" << this->_phone_num << std::endl;
	std::cout << "Darkest secret:" << this->_secret << std::endl;
}

Contact	Phonebook::get_contact(int index)
{

}
