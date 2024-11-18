/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:36:59 by beroy             #+#    #+#             */
/*   Updated: 2024/11/18 14:20:51 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "../includes/AForm.hpp"

class Intern
{
public :
	Intern();
	Intern(const Intern &copy);
	~Intern();

	Intern	&operator=(const Intern &src);

	AForm	*makeForm(std::string fname, std::string ftarget);

	// Exceptions
	class FormNotFound : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

#endif
