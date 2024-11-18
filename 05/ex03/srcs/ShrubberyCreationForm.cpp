/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:13:52 by beroy             #+#    #+#             */
/*   Updated: 2024/11/14 16:57:59 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

// Constructor & destructors
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137), _target("default") {
	std::cout << "ShrubberyCreationForm default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm target constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreation", 145, 137) {
	std::cout << "ShrubberyCreationForm copy constructor called!" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm default destructor called!" << std::endl;
}

// Overloaded operators
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	if (this != &src)
		this->_target = src._target;
	return (*this);
}

// Public methods
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	std::ofstream	outfile;

	if (this->get_signed() == 0)
		std::cout << "Form isn't signed yet..." << std::endl;
	else if (this->get_egrade() < executor.get_grade())
		throw AForm::GradeTooLowException();
	else
	{
		outfile.open((this->_target + "_shrubbery").c_str());
		if (outfile.fail())
			return (std::cout << "Outfile failed to create!" << std::endl, (void) 0);
		outfile << "               ,@@@@@@@,\n";
		outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
		outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
		outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
		outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
		outfile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
		outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
		outfile << "       |o|        | |         | |\n";
		outfile << "       |.|        | |         | |\n";
		outfile << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
		outfile.close();
	}
}
