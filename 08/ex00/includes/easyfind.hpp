/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:53:05 by beroy             #+#    #+#             */
/*   Updated: 2025/01/10 12:44:07 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

class ElementNotFoundException : public std::exception {
public:
	virtual const char	*what() const throw() {
		return ("Element not found in the container!");
	}
};

template <typename T>
typename T::iterator easyfind(T &array, int tofind) {
	typename T::iterator it;
	it = std::find(array.begin(), array.end(), tofind);
	if (it == array.end())
		throw (ElementNotFoundException());
	return (it);
}


#endif
