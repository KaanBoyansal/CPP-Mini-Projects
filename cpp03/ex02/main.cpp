/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:56:47 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/23 17:34:48 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	int	i(0);
	FragTrap	emre("Emre");
	FragTrap	ayan(emre);
	FragTrap	ben("Ben");
	FragTrap	copy;

	std::cout << "------------------------------" << std::endl;
	emre.attack("Ayan");
	ayan.attack("Ayan");
	std::cout << "------------------------------" << std::endl;
	ben.attack("Emre");
	copy.attack("Emre");
	copy = ben;
	ben.attack("Emre");
	copy.attack("Emre");
	std::cout << "------------------------------" << std::endl;
	emre.takeDamage(5);
	ben.takeDamage(20);
	ayan.highFivesGuys();
	ayan.takeDamage(0);
	copy.takeDamage(100);
	std::cout << "------------------------------" << std::endl;
	emre.beRepaired(2);
	ben.beRepaired(18);
	ayan.beRepaired(2);
	copy.beRepaired(110);
	std::cout << "------------------------------" << std::endl;
	while (i < 102) {emre.attack("Energy test"); i++;}

	return (0);
}
