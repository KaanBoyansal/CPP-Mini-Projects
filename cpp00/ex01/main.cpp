/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:01:03 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/14 16:59:06 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	main(void)
{
	std::string input;
	PhoneBook phonebook;
	while (1)
	{
		std::cout << "\n-----MENU-----\n\nCommands you can use:\n\nADD\nSEARCH\nEXIT\n\nEnter the command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phonebook.AddContact();
		}
		else if (input == "SEARCH")
		{
			phonebook.Search();
		}
		else if (input == "EXIT")
		{
			std::cout << "\n*****|Exit successfull|*****\n";
			break;
		}
	}
	return (0);
}
