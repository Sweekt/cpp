/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:13:52 by beroy             #+#    #+#             */
/*   Updated: 2024/11/13 18:14:34 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "../includes/AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
private :
	std::string _target;
public :
	// Constructor & destructors
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	~ShrubberyCreationForm();

	// Overloaded operators
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);

	// Public methods
	void	execute(Bureaucrat const &executor) const;
};

#endif
