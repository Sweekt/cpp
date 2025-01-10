/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:51:37 by beroy             #+#    #+#             */
/*   Updated: 2025/01/10 18:21:44 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public :
	MutantStack() {std::cout << "MutantStack default constructor called." << std::endl;};
	~MutantStack() {std::cout << "MutantStack default destructor called." << std::endl;};

	typedef typename std::stack<T>::container_type::iterator	iterator;
	iterator	begin(void) {return (this->c.begin());};
	iterator	end(void) {return (this->c.end());};

	typedef typename std::stack<T>::container_type::iterator	const_iterator;
	const_iterator	begin(void) const {return (this->c.begin());};
	const_iterator	end(void) const {return (this->c.end());};
};

#endif
