/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:40:09 by beroy             #+#    #+#             */
/*   Updated: 2024/11/07 15:50:35 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat
{
private :
	int	_grade;
public :
	Bureaucrat();
	Bureaucrat(int grade);
	Bureaucrat(Bureaucrat &copy);
	~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat &src);


};

#endif
