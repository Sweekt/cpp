/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:15:12 by beroy             #+#    #+#             */
/*   Updated: 2024/11/27 18:56:38 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T>
class Array
{
private :
	T				*_array;
	unsigned int	_size;
public :
	// Constructors & destructor
	Array() : _size(0) {
		std::cout << "Array default constructor called!" << std::endl;
		_array = new T[_size];
	};
	Array(unsigned int size) : _size(size) {
		std::cout << "Array size constructor called!" << std::endl;
		_array = new T[_size];
	};
	Array(const Array &copy) : _size(copy._size) {
		std::cout << "Array copy constructor called!" << std::endl;
		*this = copy;
	};
	~Array() {
		std::cout << "Array default destructor called!" << std::endl;
		delete []_array;
	};

	// Overloaded operators
	Array &operator=(const Array &src) {
		if (_array != NULL)
			delete []_array;
		this->_size = src._size;
		this->_array = new T[this->_size];
		if (this != &src)
			for (int i = 0; i < _size; i++)
				this->_array[i] = src._array[i];
		return (this);
	};

	T &operator[](unsigned int i) {
		if (i >= this->_size || this->_array == NULL)
		{
			std::cout << "Index leads out of bonds." << std::endl;
			throw (Array<T>::InvalidIndexException);
		}
		return (this->_array[i]);
	}

	// Exceptions
	class	InvalidIndexException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};
};

#endif
