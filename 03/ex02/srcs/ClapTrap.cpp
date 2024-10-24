/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:28:39 by beroy             #+#    #+#             */
/*   Updated: 2024/10/17 17:52:16 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(10), _nrg(10), _ad(0) {
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _nrg(10), _ad(0) {
	std::cout << "ClapTrap name constructor called." << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_name = src._name;
		this->_nrg = src._nrg;
		this->_ad = src._ad;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_hp == 0)
		return (std::cout << this->_name << " is already broken and can't attack anymore!" << std::endl, (void)0);
	if (this->_nrg == 0)
		return (std::cout << this->_name << " wants to attack " << target << " but has no energy left!" << std::endl, (void)0);
	this->_nrg -= 1;
	std::cout << this->_name << " attacks " << target << " causing " << this->_ad << " points of damages." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	int	old_hp = this->_hp;

	if (this->_hp == 0)
		return (std::cout << this->_name << " is already broken and can't be attacked anymore!" << std::endl, (void)0);
	if (this->_hp <= amount)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << this->_name << " got attacked and lost " << old_hp - this->_hp << " hp. ";
	std::cout << "Current hp: " << this->_hp << "." << std::endl;
	if (this->_hp == 0)
		std::cout << this->_name << " is now totally broken and good for the junkyard." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	int	old_hp = this->_hp;

	if (this->_hp == 0)
		return (std::cout << this->_name << " is broken and can't be repaired!" << std::endl, (void)0);
	if (this->_nrg == 0)
		return (std::cout << this->_name << " wants to repair but has no energy left!" << std::endl, (void)0);
	if (this->_hp == 10)
		return (std::cout << this->_name << " wants to repair but is already full health!" << std::endl, (void)0);
	this->_hp += amount;
	this->_nrg -= 1;
	if (this->_hp > MAXHP)
		this->_hp = MAXHP;
	std::cout << this->_name << " repaired and gained " << this->_hp - old_hp << " hp. ";
	std::cout << "Current hp: " << this->_hp << "." << std::endl;
}
