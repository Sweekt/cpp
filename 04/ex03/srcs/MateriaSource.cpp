/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:08:30 by beroy             #+#    #+#             */
/*   Updated: 2025/01/16 19:37:46 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

// Constructors & destructor
MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource default constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_book[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	std::cout << "MateriaSource copy constructor called!" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource default destructor called!" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_book[i];
	}
}

// Overloaded operators
MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			delete this->_book[i];
			this->_book[i] = src._book[i]->clone();
		}
	}
	return (*this);
}

// Public methods
void	MateriaSource::learnMateria(AMateria *m) {
	bool	foo = false;

	for (int i = 0; i < 4; i++) {
		if (this->_book[i] == NULL)
		{
			this->_book[i] = m;
			foo = true;
			break;
		}
	}
	if (!foo)
		std::cout << "No more room to learn this materia type!" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_book[i] != NULL && this->_book[i]->getType() == type) {
			return (this->_book[i]->clone());
		}
	}
	std::cout << "Materia type not learnt yet!" << std::endl;
	return (0);
}