/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:45:38 by beroy             #+#    #+#             */
/*   Updated: 2024/11/05 11:47:36 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "../includes/AMateria.hpp"

class Ice : public AMateria
{
public :
	Ice();
	Ice(const Ice &copy);
	~Ice();

	Ice		&operator=(const Ice *src);
	Ice		*clone() const;

	void	use(ICharacter& target);
};

#endif
