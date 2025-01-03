/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:09:43 by beroy             #+#    #+#             */
/*   Updated: 2024/10/16 14:05:23 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private :
	int	_nb;
	static int const	_bits = 8;
public :
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed 	&operator=(const Fixed &src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
