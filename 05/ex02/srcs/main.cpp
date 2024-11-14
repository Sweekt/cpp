/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:44:27 by beroy             #+#    #+#             */
/*   Updated: 2024/11/14 17:12:27 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
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
	Bureaucrat test("Kaan", 140);
	ShrubberyCreationForm	sForm("home");
	RobotomyRequestForm		rForm("Bender");
	PresidentialPardonForm	pForm("Gims");

	test.signForm(sForm);
	test.executeForm(sForm);
	quentin.executeForm(sForm);
	nancy.signForm(rForm);
	nancy.executeForm(rForm);
	quentin.signForm(pForm);
	quentin.executeForm(pForm);
}
