/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:27:55 by beroy             #+#    #+#             */
/*   Updated: 2024/10/03 17:25:04 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Welcome to this amazing Phonebook!" << std::endl;
	this->_index = -1;
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
	this->_contact[this->_index % 8].set_fname(fname);
	std::cout << "Enter last name:" << std::endl;
	while (lname == "")
		std::getline(std::cin, lname);
	this->_contact[this->_index % 8].set_lname(lname);
	std::cout << "Enter nickname:" << std::endl;
	while (nick == "")
		std::getline(std::cin, nick);
	this->_contact[this->_index % 8].set_nick(nick);
	std::cout << "Enter phone number:" << std::endl;
	while (phone_num == "")
		std::getline(std::cin, phone_num);
	this->_contact[this->_index % 8].set_phone_num(phone_num);
	std::cout << "Enter secret:" << std::endl;
	while (secret == "")
		std::getline(std::cin, secret);
	this->_contact[this->_index % 8].set_secret(secret);
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

	str = contact.get_fname();
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
	str = contact.get_lname();
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
	std::cout << std::endl;
}

void	Phonebook::search(void)
{
	std::string index;

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|          WELCOME TO THE PHONEBOOK         |" << std::endl;
	std::cout << "|___________________________________________|" << std::endl;
	std::cout << "|     INDEX| LAST NAME|FIRST NAME|  NICKNAME|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i <= this->_index; i++)
		print_contact(this->_contact[i], i);
	std::cout << "|__________|__________|__________|__________|" << std::endl << std::endl;
	std::cout << "Choose contact to inspect:" << std::endl;
	while (42)
	{
		std::getline(std::cin, index)
		if (index == "0")
		{
			phonebook.print(this->_contact[0]);
			break ;
		}
		else if (index == "1")
			phonebook.print(this->_contact[1]);
		else if (index == "2")
			phonebook.print(this->_contact[2]);
		else if (index == "3")
			phonebook.print(this->_contact[3]);
		else if (index == "4")
			phonebook.print(this->_contact[4]);
		else if (index == "5")
			phonebook.print(this->_contact[5]);
		else if (index == "6")
			phonebook.print(this->_contact[6]);
		else if (index == "7")
			phonebook.print(this->_contact[7]);
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
	return(this->_contact[index % 8]);
}
