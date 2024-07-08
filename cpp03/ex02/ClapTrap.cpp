/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:56:52 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/23 17:39:46 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Default"), hitpt(10), energy(10), dmg(0) { std::cout << "ClapTrap Default constructor called" << std::endl; }

ClapTrap::ClapTrap(std::string name):name(name), hitpt(10), energy(10), dmg(0) { std::cout << "ClapTrap " << this->name << " created" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &obj) { std::cout << "ClapTrap Copy constructor called" << std::endl; *this = obj; }

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj) 
{
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	this->dmg = obj.dmg;
	this->energy = obj.energy;
	this->hitpt = obj.hitpt;
	this->name = obj.name;
	return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap Destructor called" << std::endl; }

void	ClapTrap::attack(std::string const &target) 
{
	if (this->hitpt > 0 && this->energy > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << std::endl;
		this->energy -= 1;
	}
	else if (this->hitpt == 0)
		std::cout << this->name << " is dead and cannot move anymore!" << std::endl;
	else if (this->energy == 0)
		std::cout << this->name << " has not enough energy to attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpt > 0 && this->hitpt > amount)
	{
		std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage!" << std::endl;
		this->hitpt -= amount;
	}
	else if (this->hitpt == 0)
		std::cout << this->name << " is dead dont hit it!" << std::endl;
	else if (amount >= this->hitpt)
	{
		std::cout << this->name << " has taken " << amount << " damage and died!" << std::endl;
		this->hitpt = 0;
		this->dmg = 0;
		this->energy = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpt > 0 && this->energy > 0)
	{
		std::cout << "ClapTrap " << this->name << " repaired itself!" << std::endl;
		this->hitpt += amount;
		this->energy -= 1;
	}
	else if (this->hitpt == 0)
		std::cout << this->name << " is dead and cannot move anymore!" << std::endl;
	else if (this->energy == 0)
		std::cout << this->name << " has not enough energy to repair." << std::endl;
}
