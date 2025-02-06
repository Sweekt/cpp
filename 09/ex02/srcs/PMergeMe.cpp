/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:43:57 by beroy             #+#    #+#             */
/*   Updated: 2025/02/06 12:50:55 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PMergeMe.hpp"
#include "algorithm"
// Constructors & destructor
PMergeMe::PMergeMe(void) {
}

PMergeMe::PMergeMe(const PMergeMe &copy) {
	*this = copy;
}

PMergeMe::~PMergeMe(void) {
}

// Overloaded operators
PMergeMe &PMergeMe::operator=(const PMergeMe &src) {
	(void)src;
	return (*this);
}

// Public methods

size_t	jacob(size_t n) {
	if (n == 0)
		return (3);
	else if (n == 1)
		return (5);
	else
		return (jacob(n - 1) + 2 * jacob(n - 2));
}

template <typename T>
void	displayArray(T array, std::string name) {
	std::cout << name;
	for (size_t i = 0; i < array.size(); i++)
		std::cout << " " << array[i];
	std::cout << std::endl;
}

// Vector sorting
void	swapVec(std::vector<int> *vec, size_t i, size_t j) {
	int tmp = (*vec)[i];
	(*vec)[i] = (*vec)[j];
	(*vec)[j] = tmp;
}

void	swapPairVec(std::vector<int> *vec, size_t pos, size_t pair_size) {
	for (size_t i = 0; i < pair_size / 2; i++) {
		swapVec(vec, pos - i, (pos - pair_size / 2) - i);
	}
}

void	initOddVec(std::vector<int> vec, std::vector<int> *odd, size_t pair_size) {
	size_t	start = (vec.size() / pair_size) * pair_size;
	size_t	odd_size = vec.size() % pair_size;
	if (odd_size < pair_size / 2)
		return ;
	for (size_t i = start - 1 + pair_size / 2; i >= start; start++) {
		odd->push_back(vec[start]);
	}
}

void	initPendVec(std::vector<int> vec, std::vector<int> *pend, size_t pair_size) {
	size_t i = (pair_size * 1.5);
	if (i >= vec.size())
		return ;
	for (; i <= vec.size() - 0.5 * pair_size; i += pair_size) {
		for (size_t j = pair_size / 2; j > 0; j--) {
			pend->push_back(vec[i - j]);
		}
	}
}

void	initMainVec(std::vector<int> vec, std::vector<int> *main, size_t pair_size) {
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
}

void	binaryInsertVec(std::vector<int> to_insert, std::vector<int> *main, size_t pair_size) {
	std::vector<int>::iterator	it;
	size_t	old_jac = 0;
	size_t	jac;
	bool	done = false;
	if (to_insert.size() == 0)
		return ;
	for (size_t i = 0; !done; i++)
	{
		jac = jacob(i);
		if (jac > to_insert.size() / (pair_size * 0.5)) {
			jac = to_insert.size() / (pair_size * 0.5);
			done = true;
		}
		for (ssize_t j = jac * (pair_size * 0.5) - 1; j >= old_jac * (pair_size * 0.5); j -= pair_size * 0.5) {
			it = main->begin() + (pair_size * 0.5) - 1;
			for (; it < main->end(); it += pair_size * 0.5) {
				if (*it > to_insert[j])
					break;
			}
			if (it > main->end())
				it = main->end();
			else
				it += 1 - (pair_size * 0.5);
			for (ssize_t k = 0; k < pair_size * 0.5; k++) {
				main->insert(it, to_insert[j - k]);
				it = std::find(main->begin(), main->end(), to_insert[j - k]);
			}
		}
		old_jac = jac;
	}
}

void	addSpareVec(std::vector<int> *vec, std::vector<int> *main) {
	for (size_t i = main->size(); i < vec->size(); i++) {
		main->push_back((*vec)[i]);
	}
	vec->clear();
	for (size_t i = 0; i < main->size(); i++) {
		vec->push_back((*main)[i]);
	}
}

void	insertVec(std::vector<int> *vec, std::vector<int> *main, std::vector<int> pend, std::vector<int> odd, size_t pair_size) {
	(void) vec;
	binaryInsertVec(pend, main, pair_size);
	binaryInsertVec(odd, main, pair_size);
	addSpareVec(vec, main);
}

void	PMergeMe::sortVec(std::vector<int> vec) {
	std::vector<int>	main, pend, odd;
	size_t i = 2;
	for (;  vec.size() / i >= 1; i *= 2) {
		for (size_t j = i - 1; j < vec.size(); j += i) {
			if (vec[j] < vec[j - i / 2]) {
				swapPairVec(&vec, j, i);
			}
		}
	}
	i /= 2;
	for (; i >= 2; i /= 2) {
		initOddVec(vec, &odd, i);
		initPendVec(vec, &pend, i);
		initMainVec(vec, &main, i);
		insertVec(&vec, &main, pend, odd, i);
		odd.clear();
		pend.clear();
		main.clear();
	}
}
