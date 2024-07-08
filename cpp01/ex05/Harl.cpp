/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:58:23 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/19 19:50:27 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string Harl::mood[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::complain(std::string level)
{
	static void (Harl::*log[])(void) =
		{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::size_t i;

	i = 0;
	while (mood[i] != level)
	{
		if (i == 3)
		{
			std::cout << "* Harl is speechless *";

			return;
		}

		++i;
	}

	return (this->*log[i])();
}

void Harl::debug(void)
{
	std::cout << "I love having extra onion rings for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do!";
	std::cout << std::endl;

	return;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra onion rings costs more money. ";
	std::cout << "You didn't put enough onion rings in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!";
	std::cout << std::endl;

	return;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra onion rings for free. ";
	std::cout << "I've been coming for years ";
	std::cout << "whereas you started working here since last month.";
	std::cout << std::endl;

	return;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;

	return;
}
