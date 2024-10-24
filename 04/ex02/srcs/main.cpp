/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:02:04 by beroy             #+#    #+#             */
/*   Updated: 2024/10/24 12:31:00 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	{
//		Animal	test;
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	{
		Cat cat1;
		Cat cat2;

		cat1.set_ideas("Maybe I should hire somebody to scratch my back.", 0);
		std::cout << "Cat1: " << cat1.get_ideas(0) << std::endl;
		cat2 = cat1;
		std::cout << "Cat2: " << cat2.get_ideas(0) << std::endl;
		cat1.set_ideas("ZzZzZzZzZ...", 0);
		std::cout << "Cat1: " << cat1.get_ideas(0) << std::endl;
		std::cout << "Cat2: " << cat2.get_ideas(0) << std::endl;
	}
	return (0);
}