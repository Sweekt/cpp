/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:14:35 by beroy             #+#    #+#             */
/*   Updated: 2024/11/14 17:14:35 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

// Constructor & destructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5), _target("default") {
	std::cout << "PresidentialPardonForm default constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm target constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm("PresidentialPardon", 25, 5) {
	std::cout << "PresidentialPardonForm copy constructor called!" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm default destructor called!" << std::endl;
}

// Overloaded operators
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

// Public methods
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->get_signed() == 0)
		std::cout << "Form isn't signed yet..." << std::endl;
	else if (this->get_egrade() < executor.get_grade())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}