/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:43:57 by beroy             #+#    #+#             */
/*   Updated: 2025/02/03 19:59:28 by beroy            ###   ########.fr       */
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
size_t	jacob(size_t max) {
	size_t	n1 = 0, n = 1, tmp;

	while (n <= max) {
		tmp = 2 * n1 + n;
		n1 = n;
		n = tmp;
	}
	return (n1);
}

size_t	depth(size_t pair_size) {
	size_t i = 1;
	for (; pair_size > 2; i++, pair_size /= 2);
	return (i);
}

void	init_odd(std::vector<int> vec, std::vector<int> *odd, size_t pair_size) {
	size_t	start = (vec.size() / pair_size) * pair_size;
	size_t	odd_size = vec.size() % pair_size;
	if (odd_size < pair_size / 2)
		return ;
	for (size_t i = start - 1 + pair_size / 2; i >= start; start++) {
		odd->push_back(vec[start]);
	}
	display_vec(*odd);
} // GOOD

void	init_pend(std::vector<int> vec, std::vector<int> *pend, size_t pair_size) {
	size_t i = (pair_size * 2);
	if (i >= vec.size())
		return ;
	for (; i < vec.size(); i += pair_size) {
		for (size_t j = 0; j < pair_size / 2; j++) {
			pend->push_back(vec[(i / 2) + j]);
		}
	}
	display_vec(*pend);
} // NEED FIX SHOULD OUTPUT 8 2 0 9 14 3 1 5 4 7

void	init_main(std::vector<int> vec, std::vector<int> *main, size_t pair_size) {
	size_t i = pair_size / 2;
	if (pair_size > vec.size())
		return ;
	for (size_t j = 0; j < i; j++) {
		main->push_back(vec[j]);
	}
	for (; i + 0.5 * pair_size <= vec.size(); i += pair_size) {
		for (size_t j = 0; j < pair_size / 2; j++)
			main->push_back(vec[i + j]);
	}
	display_vec(*main);
} // GOOD

void	PMergeMe::sortVec(std::vector<int> vec) {
	std::vector<int>	main;
	std::vector<int>	pend;
	std::vector<int>	odd;
	size_t i = 2;

	std::cout << "INITIAL STACK:" << std::endl;
	display_vec(vec);
	std::cout << "PAIR SORTING:" << std::endl;

	for (;  vec.size() / i >= 1; i *= 2) {
		for (size_t j = i - 1; j < vec.size(); j += i) {
			if (vec[j] < vec[j - i / 2]) {
				swap_pair(&vec, j, i);
			}
		}
		display_vec(vec);
	}
	i /= 2;
	for (; i >= 2; i /= 2) {
		std::cout << "pair size: " << i << std::endl;
		init_odd(vec, &odd, i);
		init_pend(vec, &pend, i);
		init_main(vec, &main, i);
		odd.clear();
		pend.clear();
		main.clear();
	}
}
