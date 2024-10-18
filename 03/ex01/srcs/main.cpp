/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:28:34 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 11:41:49 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main()
{
	ScavTrap clapTrap("Josemilio");

	for (int i = 0; i < 6; i++)
		clapTrap.attack("Muriel");
	for (int i = 0; i < 4; i++)
		clapTrap.takeDamage(2);
	for (int i = 0; i < 4; i++)
		clapTrap.beRepaired(3);
	clapTrap.attack("manuMac");
	clapTrap.attack("capitalism");
	clapTrap.guardGate();
	clapTrap.guardGate();
	return (0);
}
