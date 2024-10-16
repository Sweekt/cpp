/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:10:44 by beroy             #+#    #+#             */
/*   Updated: 2024/10/16 15:45:54 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _nb(nb << this->_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _nb(roundf(nb * (1 << this->_bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : _nb(copy._nb){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_nb = src._nb;
	return (*this);
}

std::ostream 	&operator<<(std::ostream &out, const Fixed &src) {
	return(out << src.toFloat());
}

int		Fixed::getRawBits(void) const {
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw) {
	this->_nb = raw;
}

float	Fixed::toFloat(void) const {
	return((float)this->_nb / (float)(1 << this->_bits));
}

int		Fixed::toInt(void) const {
	return(this->_nb >> this->_bits);
}
