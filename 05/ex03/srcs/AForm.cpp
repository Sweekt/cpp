/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:49:51 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 13:20:24 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

// Constructor & destructors
AForm::AForm() : _name("default"), _signed(0), _egrade(150), _sgrade(150) {
	std::cout << "Form default constructor called!" << std::endl;
}

AForm::AForm(std::string name, int sgrade, int egrade) : _name(name), _signed(0), _egrade(egrade), _sgrade(sgrade) {
	std::cout << "Form grade constructor called!" << std::endl;
	if (sgrade > 150 || egrade > 150)
		throw AForm::GradeTooLowException();
	else if (sgrade < 1 || egrade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &copy) : _name(copy._name + "_copy"), _egrade(copy.get_egrade()), _sgrade(copy.get_sgrade()) {
	std::cout << "Form copy constructor called!" << std::endl;
	*this = copy;
}

AForm::~AForm() {
	std::cout << "Form default destructor called!" << std::endl;
}

// Overloaded operators
AForm	&AForm::operator=(const AForm &src) {
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

// Public methods
void	AForm::beSigned(Bureaucrat &src) {
	if (this->_sgrade < src.get_grade())
		throw (AForm::GradeTooLowException());
	else
		this->_signed = 1;
}

// Setters & getters
int			AForm::get_sgrade(void) const {
	return (this->_sgrade);
}

int			AForm::get_egrade(void) const {
	return (this->_egrade);
}

std::string	AForm::get_name(void) const {
	return (this->_name);
}

bool		AForm::get_signed(void) const {
	return (this->_signed);
}

// Exceptions
const char *AForm::GradeTooLowException::what(void) const throw() {
	return ("Grade too low");
}

const char *AForm::GradeTooHighException::what(void) const throw() {
	return ("Grade too high");
}

// Iostream overload
std::ostream 	&operator<<(std::ostream &out, const AForm &src) {
	if (src.get_signed() == 1)
		return (out << "Form " << src.get_name() << " of grade " << src.get_sgrade() << " is signed." << std::endl);
	else
		return (out << "Form " << src.get_name() << " of grade " << src.get_sgrade() << " isn't signed." << std::endl);
}
