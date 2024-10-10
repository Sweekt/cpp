/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:07:13 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 14:08:56 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::~HumanB(void) {
}

void	HumanB::attack(void) const {
	std::cout << this->_name << " attack with their " << this->_weapon->get_type() << std::endl;
}

void	HumanB::set_weapon(Weapon *weapon) {
	this->_weapon = weapon;
}
