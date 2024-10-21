/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:05:52 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:13:03 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../includes/Animal.hpp"

class Dog : public Animal
{
public :
	Dog();
	Dog(const Dog &copy);
	~Dog();

	Dog	&operator=(const Dog &src);

	void	makeSound() const;
};

#endif
