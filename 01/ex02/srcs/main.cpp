/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:36:10 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 13:50:20 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "memory adress of str: " << &str << std::endl;
	std::cout << "memory adress of ptr: " << &ptr << std::endl;
	std::cout << "memory adress of ref: " << &ref << std::endl;

	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of ptr: " << *ptr << std::endl;
	std::cout << "value of ref: " << ref << std::endl;
}
