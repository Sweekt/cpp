/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:44:27 by beroy             #+#    #+#             */
/*   Updated: 2024/11/12 15:58:59 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main()
{
	Bureaucrat bob("Bob", 1);
	Bureaucrat bob2(bob);
	std::cout << bob;
	std::cout << bob2;
	try
	{
		bob.gradeUp();
		std::cout << "Test; this should not be printed" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Incrementing grade of " << bob.get_name() << " failed: " << e.what() << std::endl;
	}
	std::cout << bob;
	try
	{
		Bureaucrat mich("Michel", 151);
		std::cout << "Test; this should not be printed" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Creation of grade 151 bureau has failed : " << e.what() << std::endl;
	}
	try
	{
		bob2.gradeDown();
		std::cout << "Test; this should be printed." << std::endl;
		bob2.gradeUp();
		std::cout << "Test; this should be printed." << std::endl;
		bob2.gradeUp();
		std::cout << "Test; this shouldn't be printed." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Incrementing grade of " << bob2.get_name() << " failed: " << e.what() << std::endl;
	}
}
