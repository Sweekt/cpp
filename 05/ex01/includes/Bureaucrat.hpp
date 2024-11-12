/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:40:09 by beroy             #+#    #+#             */
/*   Updated: 2024/11/12 15:44:48 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private :
	const std::string	_name;
	int					_grade;
public :
	// Constructor & destructors

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();

	// Overloaded operators

	Bureaucrat	&operator=(const Bureaucrat &src);

	// Public methods

	void	gradeUp();
	void	gradeDown();

	// Setters & getters

	int			get_grade(void) const;
	std::string	get_name(void) const;
	void		set_grade(int grade);

	// Exceptions
	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

// Iostream overload

std::ostream 	&operator<<(std::ostream &out, const Bureaucrat &src);

#endif
