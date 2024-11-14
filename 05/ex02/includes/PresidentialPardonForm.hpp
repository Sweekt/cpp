/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:13:42 by beroy             #+#    #+#             */
/*   Updated: 2024/11/14 17:13:42 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "../includes/AForm.hpp"

class PresidentialPardonForm : public AForm
{
private :
	std::string _target;
public :
	// Constructor & destructors
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	~PresidentialPardonForm();

	// Overloaded operators
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);

	// Public methods
	void	execute(Bureaucrat const &executor) const;
};

#endif
