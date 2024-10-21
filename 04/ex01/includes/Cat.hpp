/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:05:52 by beroy             #+#    #+#             */
/*   Updated: 2024/10/21 18:01:57 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../includes/Animal.hpp"

class Cat : public Animal
{
private :
	Brain	*_brain;
public :
	Cat();
	Cat(const Cat &copy);
	~Cat();

	Cat	&operator=(const Cat &src);

	void	makeSound() const;
};

#endif
