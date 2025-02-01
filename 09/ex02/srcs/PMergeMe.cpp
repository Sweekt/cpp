/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:43:57 by beroy             #+#    #+#             */
/*   Updated: 2025/02/01 21:09:04 by beroy            ###   ########.fr       */
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

void	display_vec(std::vector<int> vec) {
	std::cout << "vec :";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << " " << vec[i];
	std::cout << std::endl;
}

void	ft_swap(std::vector<int> *vec, size_t i, size_t j) {
	int tmp = (*vec)[i];
	(*vec)[i] = (*vec)[j];
	(*vec)[j] = tmp;
}

void	swap_pair(std::vector<int> *vec, size_t pos, size_t pair_size) {
	for (size_t i = 0; i < pair_size / 2; i++) {
		ft_swap(vec, pos - i, (pos - pair_size / 2) - i);
	}
}

// Public methods
void	PMergeMe::sortVec(std::vector<int> vec) {
	display_vec(vec);
	for (size_t i = 2;  vec.size() / i >= 1; i *= 2) {
		for (size_t j = i - 1; j < vec.size(); j += i) {
			if (vec[j] < vec[j - i / 2]) {
				swap_pair(&vec, j, i);
			}
		}
		display_vec(vec);
	}
}
