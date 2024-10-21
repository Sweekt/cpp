/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:02:04 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:33:56 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << "GOOD TESTS:" << std::endl << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << "WRONG TESTS:" << std::endl << std::endl;
	{
		WrongCat wCat;
		wCat.makeSound();
		const WrongAnimal *wCat2 = new WrongCat();
		wCat2->makeSound();
		delete wCat2;
	}
	return (0);
}