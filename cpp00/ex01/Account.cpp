/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:12:57 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/14 16:44:56 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void    PhoneBook::AddContact()
{
	this->contacts[this->b].name = take_input("Enter name: ");
	this->contacts[this->b].surName = take_input("Enter surname: ");
	this->contacts[this->b].nickName = take_input("Enter nickname: ");
	this->contacts[this->b].phoneNumber = take_input("Enter phone number: ");
	this->contacts[this->b].darkSecret = take_input("Enter darkest secret: ");
	this->contacts[this->b].index = this->b + 1;
	this->b = (this->b + 1) % 8;
	if (this->counter != 7)
		this->counter++;
}

void	PhoneBook::Search()
		{
			int	it(0);
			std::string input;

			Display();
			std::cout << "Please specify an index: ";
			std::getline(std::cin, input);
			if (input.empty())
			{
				std::cout << "\nPlease give an input!" << std::endl;
				return;
			}
			while (input[it])
			{
				if ((input[it] >= 'a' && input[it] <= 'z') || (input[it] >= 'A' && input[it] <= 'Z'))
				{
					std::cout << "Only give numbers as parameter!!" << std::endl;
					return;
				}
				it++;
			}
			it = 0;
			while (it < this->counter)
			{
				if (this->contacts[it].index == std::stoi(input))
				{
					std::cout << "Firstname: " << this->contacts[it].name << std::endl;
					std::cout << "Lastname: " << this->contacts[it].surName << std::endl;
					std::cout << "Nickname: " << this->contacts[it].nickName << std::endl;
					std::cout << "Phone Number: " << this->contacts[it].phoneNumber << std::endl;
					std::cout << "Darkest secret: " << this->contacts[it].darkSecret << std::endl;
					it = -1;
					break;
				}
				it++;
			}
			if (it != -1)
					std::cout << "Invalid index!!" << std::endl;
		}


void	PhoneBook::CrtDisplay(std::string str, int a)
{
	int	i(-1);

	if (str.length() > 10)
	{
		while (str[++i])
		{
			if (i == 9)
			{
				std::cout << ".|";
				break;
			}
			std::cout << str[i];
		}
	}
	else if (str.length() <= 10)
	{
		i = 10 - str.length();
		while (i > 0)
		{
			std::cout << " ";
			i--;
		}
		i = -1;
		while (str[++i])
			std::cout << str[i];
		std::cout << "|"; 
	}
	if (a == -1)
		std::cout << std::endl;
}

void	PhoneBook::Display(void)
{
	int	i(-1);
	int	a(8);

	std::cout << "|     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME|\n";
	std::cout << "---------------------------------------------\n";
	while (++i <= this->counter)
	{
		if (!this->contacts[i].name.empty())
		{
			std::cout << "|         "<< this->contacts[i].index << "|";
			CrtDisplay(this->contacts[i].name, 0);
			CrtDisplay(this->contacts[i].surName, 0);
			CrtDisplay(this->contacts[i].nickName, -1);
			std::cout << "---------------------------------------------\n";
		}
	}
	if (this->counter != 7)
	{
		while (a-- > this->counter)
		{
			std::cout << "|          |          |          |          |" << std::endl;
			std::cout << "---------------------------------------------\n";
		}
	}
}
