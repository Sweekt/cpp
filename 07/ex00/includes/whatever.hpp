/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:23:47 by beroy             #+#    #+#             */
/*   Updated: 2024/11/27 13:14:11 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T min(const T& a, const T& b) {
	return (a < b ? a : b);
}

template <typename U>
U max(const U& a, const U& b) {
	return (a > b ? a : b);
}

template <typename V>
void swap(V& a, V& b) {
	V tmp = a;
	a = b;
	b = tmp;
}

#endif
