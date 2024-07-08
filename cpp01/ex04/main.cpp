/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:07:28 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/19 18:49:33 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int a, char **args)
{
	if (a != 4 || !args[2][0] || !args[3][0]) { std::cout << "Please give parameters correctly !" << std::endl; return (1); }

	std::ifstream	fin(args[1]);

	if (!fin.is_open()) {
        std::cerr << "Error opening input file!" << std::endl;
        return 1;
    }
	
	std::string		newFile(args[1]);
	newFile += ".replace";
	std::ofstream	fout(newFile);
	if (!fout.is_open()){
		std::cerr << "Error opening outout file!" << std::endl;
		fin.close();
		return (1);
	}

	std::string		s1(args[2]);
	std::string		s2(args[3]);
	std::string		line;
	size_t	pos;

	while (std::getline(fin, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s1.length());
		}
		fout << line;
		if (!fin.eof())
			fout << std::endl;
	}
	fout.close();
	fin.close();
	return (0);
}
