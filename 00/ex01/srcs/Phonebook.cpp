/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:27:55 by beroy             #+#    #+#             */
/*   Updated: 2024/10/09 14:26:37 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Welcome to this amazing Phonebook!" << std::endl;
	this->_index = 0;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Goodbye!" << std::endl;
}

void	Phonebook::add(void)
{
	std::string	fname;
	std::string	lname;
	std::string	nick;
	std::string	phone_num;
	std::string	secret;

	this->_index += 1;
	std::cout << "Enter first name:" << std::endl;
	while (fname == "")
		std::getline(std::cin, fname);
	this->_contact[this->_index % 8 - 1].set_fname(fname);
	std::cout << "Enter last name:" << std::endl;
	while (lname == "")
		std::getline(std::cin, lname);
	this->_contact[this->_index % 8 - 1].set_lname(lname);
	std::cout << "Enter nickname:" << std::endl;
	while (nick == "")
		std::getline(std::cin, nick);
	this->_contact[this->_index % 8 - 1].set_nick(nick);
	std::cout << "Enter phone number:" << std::endl;
	while (phone_num == "")
		std::getline(std::cin, phone_num);
	this->_contact[this->_index % 8 - 1].set_phone_num(phone_num);
	std::cout << "Enter secret:" << std::endl;
	while (secret == "")
		std::getline(std::cin, secret);
	this->_contact[this->_index % 8 - 1].set_secret(secret);
	std::cout << "New contact added at index " << this->_index % 8 << "." << std::endl;
}

static void	print_nine(std::string str)
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".|";
}

static void	print_contact(Contact contact, int index)
{
	std::string	str;
	int			s_size;

	std::cout << "|         " << index << "|";
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
			str = contact.get_fname();
		if (i == 1)
			str = contact.get_lname();
		if (i == 2)
			str = contact.get_nick();
		s_size = str.length();
		if (s_size == 10)
			std::cout << str << "|";
		else if (s_size > 10)
			print_nine(str);
		else
		{
			for (int i = 0; i < 10 - s_size; i++)
				std::cout << " ";
			std::cout << str << "|";
		}
	}
	std::cout << std::endl;
}

void	Phonebook::search(void)
{
	std::string index;
	int			i;

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|          WELCOME TO THE PHONEBOOK         |" << std::endl;
	std::cout << "|___________________________________________|" << std::endl;
	std::cout << "|     INDEX| LAST NAME|FIRST NAME|  NICKNAME|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 1; i <= this->_index; i++)
		print_contact(this->_contact[i - 1], i);
	std::cout << "|__________|__________|__________|__________|" << std::endl << std::endl;
	if (this->_index == 0)
	{
		std::cout << "Your phonebook is empty!" << std::endl;
		return ((void) 0);
	}
	std::cout << "Choose contact to inspect:" << std::endl;
	while (42)
	{
		std::getline(std::cin, index);
		i = std::atoi(index.c_str());
		if (i!= 0 && i <= this->_index && i <= 7)
		{
			this->print(this->_contact[i - 1]);
			break;
		}
		else
			std::cout << "Wrong input!" << std::endl;
	}
}

void	Phonebook::print(Contact contact)
{
	std::cout << "First name:" << contact.get_fname() << std::endl;
	std::cout << "Last name:" << contact.get_lname() << std::endl;
	std::cout << "Nickname:" << contact.get_nick() << std::endl;
	std::cout << "Phone number:" << contact.get_phone_num() << std::endl;
	std::cout << "Darkest secret:" << contact.get_secret() << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return(this->_contact[index % 8 - 1]);
}
