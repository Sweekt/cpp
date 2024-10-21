/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:28:59 by beroy             #+#    #+#             */
/*   Updated: 2024/10/21 17:31:40 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "../includes/Brain.hpp"

class Animal
{
protected :
	std::string	_type;
public :
	Animal();
	Animal(std::string type);
	Animal(const Animal &copy);
	virtual ~Animal();

	Animal &operator=(const Animal &src);

	std::string	getType() const;

	virtual void	makeSound() const;
};

#endif
