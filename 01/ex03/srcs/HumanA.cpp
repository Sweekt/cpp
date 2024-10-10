/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:05:41 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 14:36:15 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attack with their " << this->_weapon.get_type() << std::endl;
}