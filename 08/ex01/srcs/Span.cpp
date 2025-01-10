/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:52:28 by beroy             #+#    #+#             */
/*   Updated: 2025/01/10 17:44:32 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

// Constructors & destructor
Span::Span(void) : _sizemax(100) {
	std::cout << "Span default constructor called!" << std::endl;
}

Span::Span(unsigned int n) : _sizemax(n) {
	std::cout << "Span size constructor called!" << std::endl;
}

Span::Span(const Span &copy) {
	std::cout << "Span copy constructor called!" << std::endl;
	*this = copy;
}

Span::~Span(void) {
	std::cout << "Span default destructor called!" << std::endl;
}

// Overloaded operators
Span &Span::operator=(const Span &src) {
	if (this != &src) {
		this->_sizemax = src.GetSizeMax();
		this->vec.clear();
//		this->vec.shrink_to_fit();
		this->vec = src.vec;
	}
	return (*this);
}

// Public methods
unsigned int	Span::GetSizeMax(void) const {
	return (this->_sizemax);
}

void	Span::addNumber(int number) {
	if (this->vec.size() < this->_sizemax)
		this->vec.push_back(number);
	else
		throw (SpanFullException());
}

unsigned int	Span::shortestSpan() {
	unsigned int	distance = 0;
	bool			d_bool = false;
	unsigned int	tmp;

	for (size_t i = 0; i < this->vec.size(); i++) {
		for (size_t j = i + 1; j < this->vec.size(); j++) {
			if (vec[i] < vec[j])
				tmp = vec[j] - vec[i];
			else
				tmp = vec[i] - vec[j];
			if (!d_bool || tmp < distance) {
				if (!d_bool)
					d_bool = true;
				distance = tmp;
			}
		}
	}
	if (!d_bool)
		throw (DistanceException());
	return (distance);
}

void	Span::printVec() {
	for (size_t i = 0; i < this->vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}
}

unsigned int	Span::longestSpan() {
	unsigned int	distance = 0;
	bool			d_bool = false;
	unsigned int	tmp;

	for (size_t i = 0; i < this->vec.size(); i++) {
		for (size_t j = i + 1; j < this->vec.size(); j++) {
			if (vec[i] < vec[j])
				tmp = vec[j] - vec[i];
			else
				tmp = vec[i] - vec[j];
			if (!d_bool || tmp > distance) {
				if (!d_bool)
					d_bool = true;
				distance = tmp;
			}
		}
	}
	if (!d_bool)
		throw (DistanceException());
	return (distance);
}

void	Span::insert(std::vector<int> range) {
	for (std::vector<int>::iterator it = range.begin(); it < range.end(); it++) {
		try {
			addNumber(*it);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
