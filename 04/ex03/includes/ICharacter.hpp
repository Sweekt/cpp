/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:03:39 by beroy             #+#    #+#             */
/*   Updated: 2024/11/05 11:04:15 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "../includes/AMateria.hpp"

class ICharacter
{
private :
public :
	virtual 					~ICharacter() {}
	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
