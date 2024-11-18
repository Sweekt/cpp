/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:44:26 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 14:20:28 by beroy            ###   ########.fr       */
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

AForm	*Intern::makeForm(std::string fname, std::string ftarget) {
	AForm *form = NULL;
	if (fname == "ShrubberyCreationForm")
		form = new ShrubberyCreationForm(ftarget);
	else if (fname == "RobotomyRequestForm")
		form = new RobotomyRequestForm(ftarget);
	else if (fname == "PresidentialPardonForm")
		form = new PresidentialPardonForm(ftarget);
	else
		throw Intern::FormNotFound();
	return (form);
}

// Exceptions
const char *Intern::FormNotFound::what(void) const throw() {
	return ("Form not found!");
}
