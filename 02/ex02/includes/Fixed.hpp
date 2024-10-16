/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:09:43 by beroy             #+#    #+#             */
/*   Updated: 2024/10/16 20:11:42 by beroy            ###   ########.fr       */
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
	// CONSTRUCTORS & DESTRUCTORS
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	// OVERLOADED OPERATORS
	Fixed	&operator=(const Fixed &src);

	float	operator+(Fixed fixed) const;
	float	operator-(Fixed fixed) const;
	float	operator*(Fixed fixed) const;
	float	operator/(Fixed fixed) const;

	bool	operator>(Fixed fixed) const;
	bool	operator<(Fixed fixed) const;
	bool	operator<=(Fixed fixed) const;
	bool	operator>=(Fixed fixed) const;
	bool	operator==(Fixed fixed) const;
	bool	operator!=(Fixed fixed) const;

	Fixed	operator++(void);
	Fixed	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	// SETTERS & GETTERS
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	// CONVERTERS
	float		toFloat(void) const;
	int			toInt(void) const;
	static Fixed		&min(Fixed &first, Fixed &second);
	static const Fixed	&min(const Fixed &first, const Fixed &second);
	static Fixed		&max(Fixed &first, Fixed &second);
	static const Fixed	&max(const Fixed &first, const Fixed &second);
};

std::ostream 	&operator<<(std::ostream &out, const Fixed &src);

#endif
