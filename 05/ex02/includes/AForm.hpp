/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:48:29 by beroy             #+#    #+#             */
/*   Updated: 2024/11/13 17:28:25 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
private :
	const std::string	_name;
	bool				_signed;
	int					_egrade;
	int 				_sgrade;
public :
	// Constructor & destructors
	AForm();
	AForm(std::string name, int sgrade, int egrade);
	AForm(const AForm &copy);
	~AForm();
	
	// Overloaded operators
	AForm	&operator=(const AForm &src);

	// Public methods
	void			beSigned(Bureaucrat &src);
	virtual void	execute(Bureaucrat const &executor) = 0;

	// Setters & getters
	int			get_sgrade(void) const;
	int			get_egrade(void) const;
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
std::ostream 	&operator<<(std::ostream &out, const AForm &src);

#endif
