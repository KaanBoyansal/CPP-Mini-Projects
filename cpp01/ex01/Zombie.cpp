/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:30:44 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/19 20:23:07 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { this->name = "default"; }
Zombie::Zombie(std::string name) { this->name = name; }
void	Zombie::setName(std::string name) { this->name = name; }
void    Zombie::announce(){ std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
Zombie::~Zombie() { std::cout << name << " died!" << std::endl; }