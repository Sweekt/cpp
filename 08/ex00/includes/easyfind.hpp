/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:53:05 by beroy             #+#    #+#             */
/*   Updated: 2024/11/28 17:53:05 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
T	*easyfind(T *array, int tofind) {
	for (size_t	i = 0; array[i]; i++) {
		if (array[i] == tofind)
			return (array + i);
	}
	throw (std::exception());
}

#endif
