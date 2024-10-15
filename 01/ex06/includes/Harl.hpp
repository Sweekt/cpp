/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:51:05 by beroy             #+#    #+#             */
/*   Updated: 2024/10/15 17:51:05 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private :
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public :
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif
