/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:53:28 by beroy             #+#    #+#             */
/*   Updated: 2024/10/09 17:34:53 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	zombie;
	Zombie	*zombie2;

	zombie.set_name("prout");
	zombie.announce();
	zombie2 = newZombie("Paul");
	zombie2->announce();
	delete zombie2;
	randomChump("Jacky");
}
