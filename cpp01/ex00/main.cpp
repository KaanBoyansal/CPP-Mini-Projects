/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:19:26 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/14 20:28:06 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zomb = newZombie("Ayhan");
    Zombie  zomb2("Bayhan");
    zomb->announce();
    zomb2.announce();
    randomChump("Random Bayhan");
    delete zomb;

    return (0);
}