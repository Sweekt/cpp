/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:57:44 by beroy             #+#    #+#             */
/*   Updated: 2024/11/05 15:57:44 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "../includes/AMateria.hpp"

class Cure : public AMateria
{
public :
	Cure();
	Cure(const Cure &copy);
	~Cure();

	Cure		&operator=(const Cure *src);
	Cure		*clone() const;

	void	use(ICharacter& target);
};

#endif
