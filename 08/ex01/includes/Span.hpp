/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:50:33 by beroy             #+#    #+#             */
/*   Updated: 2025/01/10 15:55:18 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
class Span
{
private :
	unsigned int		_sizemax;
	Span();
public :
	std::vector<int>	vec;
	// Constructors & destructor
	Span(unsigned int n);
	Span(const Span &copy);
	~Span();

	// Overloaded operators
	Span &operator=(const Span &src);

	// Public methods
	unsigned int	GetSizeMax(void) const;
	void			addNumber(int number);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			printVec();
	void			insert(std::vector<int> range);

	// Exception
	class SpanFullException : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return ("Span reached maximum size!");
		}
	};

	class DistanceException : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return ("No distance can be found!");
		}
	};
};

#endif
