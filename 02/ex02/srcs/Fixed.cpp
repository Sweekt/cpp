/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:10:44 by beroy             #+#    #+#             */
/*   Updated: 2024/10/16 20:07:17 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

// CONSTRUCTORS & DESTRUCTORS

Fixed::Fixed(void) : _nb(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _nb(nb << this->_bits) {
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _nb(roundf(nb * (1 << this->_bits))) {
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : _nb(copy._nb){
//	std::cout << "Copy constructor called" << std::endl;
}

// OVERLOADED OPERATORS

Fixed &Fixed::operator=(const Fixed &src) {
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_nb = src._nb;
	return (*this);
}

float	Fixed::operator+(Fixed fixed) const {
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const {
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const {
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const {
	return (this->toFloat() / fixed.toFloat());
}

bool	Fixed::operator>(Fixed fixed) const {
	if (this->toFloat() > fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed fixed) const {
	if (this->toFloat() < fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed fixed) const {
	if (this->toFloat() <= fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed fixed) const {
	if (this->toFloat() >= fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed fixed) const {
	if (this->toFloat() == fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed fixed) const {
	if (this->toFloat() != fixed.toFloat())
		return (1);
	return (0);
}

Fixed	Fixed::operator++(void){
	this->_nb += (1 << this->_bits);
	return (*this);
}

Fixed	Fixed::operator--(void){
	this->_nb -= (1 << this->_bits);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_nb += (1 << this->_bits);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_nb -= (1 << this->_bits);
	return (tmp);
}

// SETTERS & GETTERS

int		Fixed::getRawBits(void) const {
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw) {
	this->_nb = raw;
}

// PUBLIC METHODS

float	Fixed::toFloat(void) const {
	return((float)this->_nb / (float)(1 << this->_bits));
}

int		Fixed::toInt(void) const {
	return(this->_nb >> this->_bits);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	else
		return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	else
		return (f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	else
		return (f2);
}

std::ostream 	&operator<<(std::ostream &out, const Fixed &src) {
	return(out << src.toFloat());
}
