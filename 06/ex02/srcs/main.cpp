/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:22:33 by beroy             #+#    #+#             */
/*   Updated: 2024/11/26 14:18:12 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <ctime>
#include <cstdlib>

Base	*generate(void) {
	srand((unsigned)time(NULL));
	int randomNum = (rand() % 3);
	Base	*rdm = NULL;

	switch (randomNum) {
		case 2:
			rdm = new A();
			break ;
		case 1:
			rdm = new B();
			break ;
		case 0:
			rdm = new C();
			break;
		default:
			std::cout << "Random number generator failed" << std::endl;;
	}
	return (rdm);
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Class is A type." << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Class is B type." << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Class is C type." << std::endl;
	else
		std::cout << "Class is unknown type." << std::endl;
}

void	identify(Base &p) {
	void	*foo = NULL;
	Base	&unused = (Base &)foo;
	int	i = 0;

	try {
		unused = dynamic_cast<A&>(p);
	}
	catch (std::exception &e) {
		i += 1;
	}
	try {
		unused = dynamic_cast<B&>(p);
	}
	catch (std::exception &e) {
		i += 2;
	}
	try {
		unused = dynamic_cast<C&>(p);
	}
	catch (std::exception &e) {
		i += 4;
	}
	if (i == 3)
		std::cout << "Class is C type." << std::endl;
	else if (i == 5)
		std::cout << "Class is B type." << std::endl;
	else if (i == 6)
		std::cout << "Class is A type." << std::endl;
	(void)unused;
}

int main(void)
{
	Base *rdm = generate();
	identify(rdm);
	identify(*rdm);
	delete (rdm);
}