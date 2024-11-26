/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:59:21 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 13:06:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "../includes/Base.hpp"
# include <iostream>

class C : public Base
{
private :
public :
	// Constructors & destructor
	C();
	C(const C &copy);
	~C();

	// Overloaded operators
	C &operator=(const C &src);

	// Public methods
};

#endif
