/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:11:20 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 14:04:41 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

// Constructors & destructor
Base::Base(void) {
	std::cout << "Base default constructor called!" << std::endl;
}

Base::Base(const Base &copy) {
	std::cout << "Base copy constructor called!" << std::endl;
	*this = copy;
}

Base::~Base(void) {
	std::cout << "Base default destructor called!" << std::endl;
}
