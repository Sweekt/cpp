/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:44:27 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 14:24:14 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include <cstdlib>

int	main()
{
	srand((unsigned)time(NULL));
	std::cout << "----- Creating Bureaucrats -----" << std::endl;
	Bureaucrat quentin("Quentin", 1);
	Bureaucrat nancy(quentin);
	std::cout << std::endl << "----- Trying to upgrade nancy -----" << std::endl;
	try
	{
		nancy.gradeUp();
		std::cout << "Test; this shouldn't be printed." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Incrementing grade of " << nancy.get_name() << " failed: "
				  << e.what() << std::endl;
	}
	Bureaucrat	test("Kaan", 140);
	Intern	greg;
	AForm	*sForm;

	try
	{
		sForm = greg.makeForm("ShrubberyCreationForm", "home");
		test.signForm(*sForm);
		test.executeForm(*sForm);
		quentin.executeForm(*sForm);
		std::cout << "test" << std::endl;
		delete sForm;
	}
	catch (Intern::FormNotFound &e)
	{
		std::cout << "Test; this shouldn't be printed!" << std::endl;
	}
	RobotomyRequestForm		rForm("Bender");
	PresidentialPardonForm	pForm("Gims");

	nancy.signForm(rForm);
	nancy.executeForm(rForm);
	quentin.signForm(pForm);
	quentin.executeForm(pForm);

}
