/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:44:30 by beroy             #+#    #+#             */
/*   Updated: 2024/10/21 18:01:10 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private :
	std::string	_ideas[100];
public :
	Brain();
	Brain(const Brain *copy);
	~Brain();
	Brain	&operator=(const Brain *src);
};

#endif
