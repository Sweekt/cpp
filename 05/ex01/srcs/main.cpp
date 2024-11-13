/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:44:27 by beroy             #+#    #+#             */
/*   Updated: 2024/11/13 16:32:29 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main()
{
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
	std::cout << std::endl << "----- Trying to create a form of grade 0 -----" << std::endl;
	try
	{
		Form adm("adm", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << "Creating of form adm failed: " << e.what() << std::endl;
	}
	std::cout << std::endl << "----- Creating a grade 1 form -----" << std::endl;
	Form adm("adm", 1);
	std::cout << std::endl << "----- Downgrading nancy to grade 2 -----" << std::endl;
	nancy.gradeDown();
	std::cout << nancy;
	std::cout << std::endl << "----- Nancy tries to sign adm -----" << std::endl;
	nancy.signForm(adm);
	std::cout << adm;
	std::cout << std::endl << "----- Quentin tries to sign adm -----" << std::endl;
	quentin.signForm(adm);
	std::cout << adm;
}
