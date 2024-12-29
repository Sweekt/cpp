/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:53:05 by beroy             #+#    #+#             */
/*   Updated: 2024/12/29 17:56:30 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template < typename T >
typename T::iterator easyfind(T &array, int tofind) {
	typename T::iterator it = std::find(array.begin(), array.end(), tofind);
	if (it == array.end())
		throw (std::exception());
//	return (it);
}

#endif
