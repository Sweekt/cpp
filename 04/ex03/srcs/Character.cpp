/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:20:42 by beroy             #+#    #+#             */
/*   Updated: 2025/01/16 19:05:25 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character(void) {
	std::cout << "Character default constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_garb[i] = NULL;
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character name constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_garb[i] = NULL;
}

Character::Character(const Character &copy) {
	std::cout << "Character copy constructor called!" << std::endl;
	*this = copy;
}

Character::~Character(void) {
	std::cout << "Character default destructor called!" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_inv[i];
	}
	for (int i = 0; i < 100; i++) {
		delete this->_garb[i];
	}
}

Character	&Character::operator=(const Character &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			delete this->_inv[i];
			this->_inv[i] = src._inv[i]->clone();
		}
	}
	return (*this);
}

std::string const		&Character::getName(void) const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inv[i] == NULL) {
			this->_inv[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (this->_inv[idx] == NULL)
		return ;
	for (int i = 0; i < 100; i++) {
		if (this->_garb[i] != NULL) {
			this->_garb[i] = this->_inv[idx];
			this->_inv[idx] = NULL;
			std::cout << this->getName() << "'s " << idx << "th's Materia succesfully unequiped!" << std::endl;
		}
	}
	if (this->_inv[idx] != NULL)
		std::cout << "Cannot drop Materia, floor is already flooded!" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (this->_inv[idx] == NULL)
		return ;
	std::cout << this->getName() << ": ";
	this->_inv[idx]->use(target);
}