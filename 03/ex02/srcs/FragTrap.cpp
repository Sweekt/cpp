/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:01:47 by beroy             #+#    #+#             */
/*   Updated: 2024/10/17 18:07:06 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	this->_hp = 100;
	this->_nrg = 100;
	this->_ad = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hp = 100;
	this->_nrg = 100;
	this->_ad = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) {
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_name = src._name;
		this->_nrg = src._nrg;
		this->_ad = src._ad;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void){
	std::cout << "Hi human, could you hit the palm of my hand with yours ?" << std::endl;
}