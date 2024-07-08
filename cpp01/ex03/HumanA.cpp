/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:50:13 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/15 15:50:29 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep):_wep(wep) { this->name = name; }
HumanA::~HumanA() {};
void	HumanA::attack() { std::cout << this->name << " attacks with their " << this->_wep.getType() << std::endl; }
