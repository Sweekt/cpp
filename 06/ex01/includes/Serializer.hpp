/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:04:35 by beroy             #+#    #+#             */
/*   Updated: 2024/11/25 17:33:27 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <cstdlib>

class Data;

class Serializer
{
private :
	// Constructors & destructor
	Serializer();
	Serializer(const Serializer &copy);
	~Serializer();

	// Overloaded operators
	Serializer &operator=(const Serializer &src);
public :
	// Public methods
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
