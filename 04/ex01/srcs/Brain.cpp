/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:47:38 by beroy             #+#    #+#             */
/*   Updated: 2024/10/21 18:09:56 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain *copy) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
}

Brain::~Brain(void) {
	std::cout << "Brain default destructor called." << std::endl;
}

Brain	&Brain::operator=(const Brain *src) {
	if (this != src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src->_ideas[i];
	}
	return (*this);
}