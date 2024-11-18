/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:36:59 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 14:55:23 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "../includes/AForm.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{
public :
	Intern();
	Intern(const Intern &copy);
	~Intern();

	Intern	&operator=(const Intern &src);

	//Public methods
	AForm	*makeSForm(std::string target);
	AForm	*makeRForm(std::string target);
	AForm	*makePForm(std::string target);
	AForm	*makeForm(std::string fname, std::string ftarget);

	// Exceptions
	class FormNotFound : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

#endif
