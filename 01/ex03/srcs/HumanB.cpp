/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:07:13 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 17:11:01 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB(void) {
}

void	HumanB::attack(void) const {
	if (this->_weapon)
		std::cout << this->_name << " attack with their " << this->_weapon->get_type() << std::endl;
	else
		std::cout << this->_name << " tries to attack but has no weapon..." << std::endl;
}

void	HumanB::set_weapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
