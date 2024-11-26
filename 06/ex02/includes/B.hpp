/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:00:28 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 13:06:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "../includes/Base.hpp"
# include <iostream>

class B : public Base
{
private :
public :
	// Constructors & destructor
	B();
	B(const B &copy);
	~B();

	// Overloaded operators
	B &operator=(const B &src);

	// Public methods
};

#endif
