/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:56:47 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/23 16:42:30 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ayan("Ayan");
	ClapTrap	baco("Baco");
	ClapTrap	emre(ayan);
	ClapTrap	bilal;

	bilal.attack("Baco");
	bilal = baco;
	bilal.attack("Baco");
	emre.attack("Bilal");
	ayan.attack("Bilal");
	baco.attack("Ayan");
	ayan.attack("Baco");

	bilal.takeDamage(3);
	emre.takeDamage(4);
	ayan.takeDamage(5);
	baco.takeDamage(12);

	emre.beRepaired(4);
	bilal.beRepaired(2);
	ayan.beRepaired(5);
	baco.beRepaired(6);
	return (0);
}
