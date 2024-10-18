/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:02:04 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:13:03 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
//	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return 0;
}