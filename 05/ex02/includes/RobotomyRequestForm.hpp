/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:45:22 by beroy             #+#    #+#             */
/*   Updated: 2024/11/14 16:45:22 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "../includes/AForm.hpp"

class RobotomyRequestForm : public AForm
{
private :
	std::string _target;
public :
	// Constructor & destructors
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();

	// Overloaded operators
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);

	// Public methods
	void	execute(Bureaucrat const &executor) const;
};


#endif
