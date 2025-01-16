/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:08:21 by beroy             #+#    #+#             */
/*   Updated: 2025/01/16 19:08:36 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "../includes/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private :
	AMateria *_book[4];
public :
	// Constructors & destructor
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	~MateriaSource();

	// Overloaded operators
	MateriaSource &operator=(const MateriaSource &src);

	// Public methods
	virtual void		learnMateria(AMateria *m);
	virtual AMateria*	createMateria(std::string const &type);
};

#endif
