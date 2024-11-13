/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:44:34 by beroy             #+#    #+#             */
/*   Updated: 2024/11/12 15:54:58 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

// Constructor & destructors
Bureaucrat::Bureaucrat() : _name("kevin"), _grade(150) {
	std::cout << "Bureaucrat default constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "Bureaucrat grade constructor called!" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name + "_copy") {
	std::cout << "Bureaucrat copy constructor called!" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat default destructor called!" << std::endl;
}

// Overloaded operators
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src) {
	if (this != &src)
		this->_grade = src._grade;
	return (*this);
}

// Public methods
void	Bureaucrat::gradeUp() {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void	Bureaucrat::gradeDown() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

// Setters & getters
int	Bureaucrat::get_grade(void) const {
	return (this->_grade);
}

std::string	Bureaucrat::get_name(void) const {
	return (this->_name);
}

void	Bureaucrat::set_grade(int grade) {
	if (grade < 1)
		;
	else if (grade > 150)
		;
	else
		this->_grade = grade;
}

// Exceptions
const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Grade too low");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Grade too high");
}

// Iostream overload
std::ostream 	&operator<<(std::ostream &out, const Bureaucrat &src) {
	return(out << src.get_name() <<  ", bureaucrat grade " << src.get_grade() << "." << std::endl);
}