/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:44:26 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 14:57:21 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern(void) {
	std::cout << "Intern default constructor called!" << std::endl;
}

Intern::Intern(const Intern &copy) {
	std::cout << "Intern copy constructor called!" << std::endl;
	*this = copy;
}

Intern::~Intern(void) {
	std::cout << "Intern default destructor called!" << std::endl;
}

Intern	&Intern::operator=(const Intern &src) {
	(void)src;
	return (*this);
}

AForm	*Intern::makeSForm(std::string target) {
	AForm	*form = new ShrubberyCreationForm(target);
	return (form);
}
AForm	*Intern::makeRForm(std::string target) {
	AForm	*form = new RobotomyRequestForm(target);
	return (form);
}
AForm	*Intern::makePForm(std::string target) {
	AForm	*form = new PresidentialPardonForm(target);
	return (form);
}

AForm	*Intern::makeForm(std::string fname, std::string ftarget) {
	AForm	*(Intern::*func[3])(std::string target) = {&Intern::makeSForm, &Intern::makeRForm, &Intern::makePForm};
	std::string	str[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	for (int i = 0; i < 3; i++)
		if (fname == str[i])
			return ((this->*func[i])(ftarget));
	throw Intern::FormNotFound();
}

// Exceptions
const char *Intern::FormNotFound::what(void) const throw() {
	return ("Form not found!");
}
