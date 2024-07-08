/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:55:48 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/21 20:36:24 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_fixedVal(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::~Fixed() {std::cout << "Desctructor called" << std::endl;}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedVal = val << this->_fractBit;
}

Fixed::Fixed(const Fixed &cpy) 
{ 
	std::cout << "Copy constructor called" << std::endl; 
	*this = cpy; 
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedVal = int(roundf(val * (1 << this->_fractBit)));
}

float	Fixed::toFloat(void) const
{
	return float(this->_fixedVal) / (1 << this->_fractBit);
}

int		Fixed::toInt(void) const
{
	return (this->_fixedVal / 256);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedVal);
}
void	Fixed::setRawBits(int const raw)
{
	this->_fixedVal = raw; 
}

Fixed	&Fixed::operator=(const Fixed &obj) 
{
	std::cout << "Copy assignment operator called" << std::endl; 
	this->_fixedVal = obj.getRawBits(); 
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	std::cout << obj.toFloat();
	return (out);
}
