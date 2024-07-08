/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:55:49 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/21 21:01:20 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int 				_fixedVal;
		static const int	_fractBit = 8;
	public:
		Fixed();
		Fixed(const Fixed &cpy);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		bool	operator<(const Fixed &obj);
		bool	operator>(const Fixed &obj);
		bool	operator<=(const Fixed &obj);
		bool	operator>=(const Fixed &obj);
		bool	operator==(const Fixed &obj);
		bool	operator!=(const Fixed &obj);
		Fixed	operator+(const Fixed &obj);
		Fixed	operator-(const Fixed &obj);
		Fixed	operator*(const Fixed &obj);
		Fixed	operator/(const Fixed &obj);
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		static	Fixed &max(Fixed &o1, Fixed &o2);
		static	Fixed &min(Fixed &o1, Fixed &o2);
		static const Fixed &max(const Fixed &o1, const Fixed &o2);
		static const Fixed &min(const Fixed &o1, const Fixed &o2);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(const Fixed &obj);
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif