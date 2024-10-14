/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:36:24 by beroy             #+#    #+#             */
/*   Updated: 2024/10/14 17:12:01 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(std::string str, char **av)
{
	std::ofstream	outfile;
	ssize_t				pos;

	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
		return (std::cout << "Outfile failed to create!" << std::endl, 1);
	for (ssize_t i = 0; i < (ssize_t)str.size(); i++)
	{
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int	main(int ac, char**av)
{
	char			c;
	std::ifstream	infile;
	std::string		str;

	if (ac != 4)
		return (std::cout << "Wrong input!" << std::endl, 1);
	infile.open(av[1]);
	if (infile.fail())
		return (std::cout << "File failed to open!" << std::endl, 1);
	while (infile.eof() == 0)
	{
		infile >> std::noskipws >> c;
		str += c;
	}
	infile.close();
	return (replace(str, av));
}
