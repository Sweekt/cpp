/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:19:48 by beroy             #+#    #+#             */
/*   Updated: 2024/11/25 17:51:05 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"

int main(void)
{
	Data 		*ptr = new Data();
	Data		*ptr2;
	uintptr_t	adr;

	std::cout << "ACCESSING DATA MEMBERS:" << std::endl;
	std::cout << "i: " << ptr->get_i() << " || str: " << ptr->get_str() << std::endl;
	adr = Serializer::serialize(ptr);
	std::cout <<std::endl << "PRINTING PTR ADRESS: " << std::endl;
	std::cout << "adr : " << adr << std::endl;
	ptr2 = Serializer::deserialize(adr);
	std::cout << std::endl << "TRYING TO ACCESS DATA MEMBERS AFTER SERIALIZATION/DESERIALIZATION:" << std::endl;
	std::cout << "i: " << ptr2->get_i() << " || str: " << ptr2->get_str() << std::endl;
	delete ptr;
}