/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:59:42 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/15 15:57:00 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) { this->name = name; }
HumanB::~HumanB() {};
void	HumanB::setWeapon(Weapon &wep) { this->_wep = &wep; }
void	HumanB::attack() { std::cout << this->name << " attacks with their " << this->_wep->getType() << std::endl; }