/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:27:44 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/23 15:04:07 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool _guardian_gate;
	public:
		ScavTrap();
		ScavTrap(std::string name );
		ScavTrap(const ScavTrap &obj);
		ScavTrap	&operator=(const ScavTrap &obj);
		~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();
};



#endif