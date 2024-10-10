/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:04:53 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 14:36:15 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "../includes/Weapon.hpp"

class HumanA {
	private :
		std::string	_name;
		Weapon		&_weapon;
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void) const;
};

#endif