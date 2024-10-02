/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:23:16 by beroy             #+#    #+#             */
/*   Updated: 2024/09/24 17:24:55 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../includes/contact.hpp"

class	Phonebook
{
	private:
		Contact	_contact[8];
		int 	_index;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
		void	print(Contact contact);
		Contact	get_contact(int index);
};

#endif
