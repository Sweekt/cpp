/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:54:02 by beroy             #+#    #+#             */
/*   Updated: 2024/10/17 16:22:35 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "../includes/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private :
	bool	_guard;
public :
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &src);

	void	attack(const std::string &target);
	void	guardGate();
};

#endif
