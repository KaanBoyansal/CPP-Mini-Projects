/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:57:09 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/15 15:51:58 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *_wep;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &wep);
		void	attack();
};


#endif