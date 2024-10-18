/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:28:59 by beroy             #+#    #+#             */
/*   Updated: 2024/10/18 12:39:41 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected :
	std::string	_type;
public :
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &src);

	std::string	getType() const;

	void	makeSound() const;
};

#endif
