/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:14:35 by beroy             #+#    #+#             */
/*   Updated: 2024/11/25 17:19:38 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
private :
	int _i;
	std::string _str;
public :
	// Constructors & destructor
	Data();
	Data(const Data &copy);
	~Data();

	// Overloaded operators
	Data &operator=(const Data &src);

	// Setters & getters
	int 		get_i(void) const;
	std::string	get_str(void) const;
};

#endif
