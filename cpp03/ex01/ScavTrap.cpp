/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:27:43 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/23 16:53:18 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->hitpt = 100;
	this->energy = 50;
	this->dmg = 20;
	this->_guardian_gate = 0;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	this->dmg = obj.dmg;
	this->energy = obj.energy;
	this->name = obj.name;
	this->hitpt = obj.hitpt;
	this->_guardian_gate = obj._guardian_gate;
	return (*this);
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called for " << this->name << std::endl;
	this->hitpt = 100;
	this->energy = 50;
	this->dmg = 20;
	this->_guardian_gate = 0;
}

ScavTrap::ScavTrap(const ScavTrap &obj) { std::cout << "ScavTrap copy constructor called" << std::endl; *this = obj; }

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor called." << std::endl; }

void	ScavTrap::guardGate(void)
{
	this->_guardian_gate = 1;
	std::cout << this->name << " is now in gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hitpt > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacked " << target << std::endl;
		this->energy--;
	}
	else if (this->hitpt == 0)
		std::cout << this->name << " is dead and not able to attack " << target << std::endl;
	else if (this->energy == 0)
		std::cout << this->name << " has not enough energy to attack " << target << std::endl;
}
