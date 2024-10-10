/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:07:02 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 17:11:01 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "../includes/Weapon.hpp"

class HumanB {
	private :
		std::string	_name;
		Weapon		*_weapon;
	public :
		HumanB(std::string name);
		~HumanB();
		void	attack(void) const;
		void	set_weapon(Weapon &weapon);
};

#endif
