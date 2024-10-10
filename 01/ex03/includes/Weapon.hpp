/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:01:53 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 14:13:11 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {
	private :
		std::string	_type;
	public :
		Weapon(std::string type);
		~Weapon();
		std::string	get_type(void) const;
		void		set_type(std::string str);
};

#endif