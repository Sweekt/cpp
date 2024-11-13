/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:49:51 by beroy             #+#    #+#             */
/*   Updated: 2024/11/13 15:45:39 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

// Constructor & destructors
Form::Form() : _name("default"), _signed(0), _grade(150) {
	std::cout << "Form default constructor called!" << std::endl;
}

Form::Form(std::string name, int grade) : _name(name), _signed(0) {
	std::cout << "Form grade constructor called!" << std::endl;
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
	else
		this->_grade = grade;
}

Form::Form(const Form &copy) {
	std::cout << "Form copy constructor called!" << std::endl;
	*this = copy;
}

Form::~Form() {
	std::cout << "Form default destructor called!" << std::endl;
}

// Overloaded operators
Form	&Form::operator=(const Form &src) {
	if (this != &src)
	{
		this->_signed = src._signed;
		this->_grade = src._grade;
	}
	return (*this);
}

// Public methods
void	Form::beSigned(Bureaucrat &src) {
	if (this->_grade < src.get_grade())
		throw (Form::GradeTooLowException());
	else
		this->_signed = 1;
}

// Setters & getters
int			Form::get_grade(void) const {
	return (this->_grade);
}

std::string	Form::get_name(void) const {
	return (this->_name);
}

bool		Form::get_signed(void) const {
	return (this->_signed);
}

// Exceptions
const char *Form::GradeTooLowException::what(void) const throw() {
	return ("Grade too low");
}

const char *Form::GradeTooHighException::what(void) const throw() {
	return ("Grade too high");
}

// Iostream overload
std::ostream 	&operator<<(std::ostream &out, const Form &src) {
	if (src.get_signed() == 1)
		return (out << "Form " << src.get_name() << " of grade " << src.get_grade() << " is signed." << std::endl);
	else
		return (out << "Form " << src.get_name() << " of grade " << src.get_grade() << " isn't signed." << std::endl);
}