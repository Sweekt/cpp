/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:02:12 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 14:03:26 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(void) {
}

Weapon::~Weapon(void) {
}

std::string	Weapon::get_type(void) const {
	return (this->_type);
}

void	Weapon::set_type(std::string str) {
	this->_type = str;
}