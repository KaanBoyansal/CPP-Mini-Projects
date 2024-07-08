/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:58:35 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/19 19:51:49 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		static std::string mood[];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif