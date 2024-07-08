/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:33:26 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/15 15:04:10 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};
Weapon::Weapon(std::string type) { this->type = type; }
Weapon::~Weapon() {};

const std::string	&Weapon::getType() { return (this->type); }

void	Weapon::setType(std::string type) { this->type = type; }
