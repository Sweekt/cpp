/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:01:31 by beroy             #+#    #+#             */
/*   Updated: 2025/01/16 19:01:47 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "../includes/ICharacter.hpp"

class Character : public ICharacter
{
private :
	std::string	_name;
	AMateria	*_inv[4];
	AMateria	*_garb[100];
public :
	Character();
	Character(std::string name);
	Character(const Character &copy);
	~Character();

	Character &operator=(const Character &src);

	// Public Methods
	std::string const	&getName(void) const;
	virtual void		equip(AMateria* m);
	virtual void		unequip(int idx);
	virtual void		use(int idx, ICharacter& target);
};

#endif
