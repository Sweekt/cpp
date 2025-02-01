/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:43:57 by beroy             #+#    #+#             */
/*   Updated: 2025/02/01 18:14:18 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PMergeMe.hpp"

// Constructors & destructor
PMergeMe::PMergeMe(void) {
}

PMergeMe::PMergeMe(const PMergeMe &copy) {
	*this = copy;
}

PMergeMe::~PMergeMe(void) {
}

// Overloaded operators
PMergeMe &PMergeMe::operator=(const PMergeMe &src){
	(void)src;
	return (*this);
}

// Public methods
void	PMergeMe::sortVec(std::vector<int> vec) {
	for (int i = 1;  vec.size() / i >= 1; i *= 2) {
		std::cout << "i = " << i << " size = " << vec.size() << std::endl;
	}
}
