/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:48:29 by beroy             #+#    #+#             */
/*   Updated: 2024/11/13 15:01:44 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
private :
	const std::string	_name;
	bool				_signed;
	const int			_egrade;
	const int 			_sgrade;
public :
	// Constructor & destructors
	Form();
	Form(std::string name, int sgrade, int egrade);
	Form(const Form &copy);
	~Form();
	
	// Overloaded operators
	Form	&operator=(const Form &src);

	// Public methods
	void	beSigned(Bureaucrat &src);

	// Setters & getters
	int			get_egrade(void) const;
	int			get_sgrade(void) const;
	std::string	get_name(void) const;
	bool		get_signed(void) const;

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
std::ostream 	&operator<<(std::ostream &out, const Form &src);

#endif
