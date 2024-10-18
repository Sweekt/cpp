/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:05:52 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 13:07:53 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "../includes/Animal.hpp"

class Cat : public Animal
{
public :
	Cat();
	Cat(const Cat &copy);
	~Cat();

	Cat	&operator=(const Cat &src);

	void	makeSound() const;
};

#endif
