/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:28:59 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 12:39:41 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ANIMAL_HPP
# define CPP_ANIMAL_HPP

# include <iostream>

class Animal
{
protected :
	std::string	_type;
public :
	Animal();
	Animal(std::string type);
	Animal(const Animal &copy);
	~Animal();

	Animal &operator=(const Animal &src);

	std::string	getType() const;

	virtual void	makeSound() const;
};

#endif
