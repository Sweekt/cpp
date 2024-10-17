/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:56:33 by beroy             #+#    #+#             */
/*   Updated: 2024/10/17 16:59:57 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _guard(0) {
	this->_hp = 100;
	this->_nrg = 50;
	this->_ad = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guard(0) {
	this->_hp = 100;
	this->_nrg = 50;
	this->_ad = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_name = src._name;
		this->_nrg = src._nrg;
		this->_ad = src._ad;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_hp == 0)
		return (std::cout << this->_name << " is already broken and can't attack anymore!" << std::endl, (void)0);
	if (this->_nrg == 0)
		return (std::cout << this->_name << " wants to attack " << target << " but has no energy left!" << std::endl, (void)0);
	this->_nrg -= 1;
	std::cout << this->_name << " attacks " << target << " in a very ScavyTrapy way, causing " << this->_ad << " points of damages." << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->_guard == 0)
	{
		std::cout << this->_name << " is entering gate keeper mode." << std::endl;
		this->_guard = 1;
	}
	else
		std::cout << this->_name << " is already in gate keeper mode." << std::endl;
}