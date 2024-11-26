/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:10:32 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 13:59:59 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
protected :
	// Constructors & destructor
	Base();
	Base(const Base &copy);

	// Overloaded operators
	Base &operator=(const Base &src);
public :
	virtual ~Base();
};

#endif
