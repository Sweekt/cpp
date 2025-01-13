/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:11:11 by beroy             #+#    #+#             */
/*   Updated: 2025/01/13 19:50:07 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
private :
	std::stack<int>	_rpn;
	int 			_result;
public :
	// Constructors & destructor
	RPN();
	RPN(const RPN &copy);
	~RPN();

	// Overloaded operators
	RPN &operator=(const RPN &src);

	// Public methods
	void	calculator(std::string expr);
	int		get_result(void);
	// Exceptions
	class InvalidExpr : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return ("Invalid expression format.");
		}
	};
};

#endif
