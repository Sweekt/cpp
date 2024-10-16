/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:09:43 by beroy             #+#    #+#             */
/*   Updated: 2024/10/16 14:34:31 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private :
	int	_nb;
	static int const	_bits = 8;
public :
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	Fixed 	&operator=(const Fixed &src);
	Fixed 	&operator<<(const Fixed &src);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

#endif
