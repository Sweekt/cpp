/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:47:09 by beroy             #+#    #+#             */
/*   Updated: 2024/11/14 17:10:19 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include <cstdlib>

// Constructor & destructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45), _target("default") {
	std::cout << "RobotomyRequestForm default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm target constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("RobotomyRequest", 72, 45) {
	std::cout << "RobotomyRequestForm copy constructor called!" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm default destructor called!" << std::endl;
}

// Overloaded operators
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

// Public methods
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	int random = rand();
	if (this->get_signed() == 0)
		std::cout << "Form isn't signed yet..." << std::endl;
	else if (this->get_egrade() < executor.get_grade())
		throw AForm::GradeTooLowException();
	else
	{
		if (random % 2 == 0)
			std::cout << "Grrr Paw Paw, la mala est ganx. " <<  this->_target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Grrr Paw Paw, la mala est ganx. Robotomy has failed successfully!" << std::endl;
	}
}