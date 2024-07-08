/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:12:26 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/19 20:02:16 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { std::cout << "Default constructor called."; }
Zombie::Zombie(std::string name) { this->name = name; }
void    Zombie::announce(){ std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
Zombie::~Zombie() { std::cout << name << " died!" << std::endl; }
