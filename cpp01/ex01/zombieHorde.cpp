/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:31:58 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/19 20:17:27 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int i(-1);
    Zombie  *horde = new Zombie[N];

    while (++i < N)
    {
        horde[i].setName(name);
		horde[i].announce();
    }
    return (horde);
}
