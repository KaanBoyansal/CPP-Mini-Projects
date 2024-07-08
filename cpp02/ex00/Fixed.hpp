/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:19:38 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/21 18:42:52 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private:
		int	_fixedValue;
		static const int _fractBits = 8;
	public:
		Fixed();
		Fixed(Fixed &cpy);
		Fixed	&operator=(Fixed &obj);
		~Fixed();
		int	getRawBits(void);
		void	setRawBits(int const raw);
};


#endif