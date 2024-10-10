/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:11:37 by beroy             #+#    #+#             */
/*   Updated: 2024/10/09 18:00:02 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private :
		std::string	_name;
	public :
		Zombie();
		~Zombie();
		void		announce(void);
		std::string	get_name(void) const;
		void		set_name(std::string str);
};

Zombie*	zombieHorde(int N, std::string name);

#endif