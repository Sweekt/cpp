/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:46:37 by beroy             #+#    #+#             */
/*   Updated: 2024/11/28 15:35:03 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename R, typename U>
void iter(T *array, U arr_len, R (*foo)(T &)) {
	if (array == NULL || foo == NULL)
		return ;
	for (U i = 0; i < arr_len; i++)
		foo(array[i]);
}

#endif
