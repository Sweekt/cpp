/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 08:34:41 by beroy             #+#    #+#             */
/*   Updated: 2025/02/01 20:03:14 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PMergeMe.hpp"

std::vector<int>	fill_vec(int ac, char **av)
{
	std::vector<int>	vec;
	for (int i = 1; i < ac; i++) {
		vec.push_back(atol(av[i]));
	}
	return (vec);
}

int main(int ac, char **av) {
	std::vector<int>	vec;

	if (ac < 2)
		return (0);
	vec = fill_vec(ac, av);
	PMergeMe::sortVec(vec);
	return (0);
}