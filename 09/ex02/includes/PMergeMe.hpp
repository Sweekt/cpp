/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:02:23 by beroy             #+#    #+#             */
/*   Updated: 2025/02/01 18:06:52 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <cmath>

class PMergeMe {
private :
	PMergeMe();
	PMergeMe(const PMergeMe &copy);
	~PMergeMe();
	PMergeMe &operator=(const PMergeMe &src);
public :
	static void	sortVec(std::vector<int> vec);
//	void	sortDeq(std::deque<int> deq);
};
