/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:11:33 by beroy             #+#    #+#             */
/*   Updated: 2025/01/17 18:48:24 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

// Constructors & destructor
RPN::RPN(void) {
	std::cout << "RPN default constructor called!" << std::endl;
}

RPN::RPN(const RPN &copy) {
	std::cout << "RPN copy constructor called!" << std::endl;
	*this = copy;
}

RPN::~RPN(void) {
	std::cout << "RPN default destructor called!" << std::endl;
}

// Overloaded operators
RPN &RPN::operator=(const RPN &src) {
	if (this != &src) {
		this->_rpn = src._rpn;
	}
	return (*this);
}

// Public methods
bool	isOp(const char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

bool	isDigit(const char c) {
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}
bool	valid_char(const char c) {
	if (c == ' ' || isOp(c) || isDigit(c))
		return (true);
	return (false);
}
int		doOp(char c, int a, int b) {
	if (c == '-')
		return (b - a);
	else if (c == '+')
		return (a + b);
	else if (c == '*')
		return (a * b);
	return (b / a);
}

void	RPN::calculator(std::string expr) {
	int	tmp;

	if (expr.empty())
		throw (InvalidExpr());
	for (size_t i = 0; i < expr.size(); i++) {
		if (!valid_char(expr[i])) {
			while (this->_rpn.size() != 0)
				this->_rpn.pop();
			throw (InvalidExpr());
		}
		if (expr[i] == ' ')
			continue ;
		else if (isDigit(expr[i]))
			this->_rpn.push(expr[i] - 48);
		else {
			if (this->_rpn.size() < 2) {
				while (this->_rpn.size() != 0)
					this->_rpn.pop();
				throw (InvalidExpr());
			}
			tmp = this->_rpn.top();
			this->_rpn.pop();
			this->_rpn.top() = doOp(expr[i], tmp, this->_rpn.top());
		}
	}
	if (this->_rpn.size() > 1) {
		while (this->_rpn.size() != 0)
			this->_rpn.pop();
		throw (InvalidExpr());
	}
	this->_result = this->_rpn.top();
	while (this->_rpn.size() != 0)
		this->_rpn.pop();
}

int	RPN::get_result(void) {
	return (this->_result);
}
