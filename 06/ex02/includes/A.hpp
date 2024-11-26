/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:01:49 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 13:06:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "../includes/Base.hpp"
# include <iostream>

class A : public Base
{
private :
public :
	// Constructors & destructor
	A();
	A(const A &copy);
	~A();

	// Overloaded operators
	A &operator=(const A &src);

	// Public methods
};

#endif
