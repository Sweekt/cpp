/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:11:53 by beroy             #+#    #+#             */
/*   Updated: 2024/11/05 11:26:54 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(const AMateria &copy);
	AMateria(const std::string &type);
	~AMateria();

	AMateria	&operator=(const AMateria *src);

	const std::string	&getType() const; //Returns the materia type
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
