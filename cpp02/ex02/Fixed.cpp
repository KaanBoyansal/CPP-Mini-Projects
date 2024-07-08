/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:55:48 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/21 21:12:06 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_fixedVal(0) {}
Fixed::~Fixed() {}

Fixed::Fixed(int const val)
{
	this->_fixedVal = val << this->_fractBit;
}

Fixed::Fixed(const Fixed &cpy) 
{ 
	*this = cpy; 
}

Fixed::Fixed(float const val)
{
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
	this->_fixedVal = obj.getRawBits(); 
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	std::cout << obj.toFloat();
	return (out);
}

bool	Fixed::operator<(const Fixed &obj)
{
	return this -> _fixedVal < obj.getRawBits();
}

bool	Fixed::operator>(const Fixed &obj)
{
	return this -> _fixedVal > obj.getRawBits();
}

bool	Fixed::operator<=(const Fixed &obj)
{
	return this -> _fixedVal <= obj.getRawBits();
}

bool	Fixed::operator>=(const Fixed &obj)
{
	return this -> _fixedVal >= obj.getRawBits();
}

bool	Fixed::operator==(const Fixed &obj)
{
	return this -> _fixedVal == obj.getRawBits();
}

bool	Fixed::operator!=(const Fixed &obj)
{
	return this -> _fixedVal != obj.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &obj)
{
	Fixed result;

	result.setRawBits(this -> _fixedVal + obj.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &obj)
{
	Fixed result;

	result.setRawBits(this -> _fixedVal - obj.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &obj)
{
	Fixed result;

	result.setRawBits(this -> _fixedVal * obj.getRawBits() >> this -> _fractBit);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &obj)
{
	Fixed result;

	result.setRawBits(this -> _fixedVal / (obj.getRawBits() >> this -> _fractBit));
	return (result);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this -> _fixedVal += 1;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this -> _fixedVal -= 1;
	return (tmp);
}

Fixed	&Fixed::operator++(void)
{
	this -> _fixedVal += 1;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this -> _fixedVal += 1;
	return (*this);
}

Fixed &Fixed::min(Fixed &o1, Fixed &o2)
{
	if (o1 > o2)
		return (o2);
	return (o1);
}

const Fixed &Fixed::max(const Fixed &o1, const Fixed &o2)
{
	if (o1.getRawBits() > o2.getRawBits())
		return(o1);
	return (o2);
}

const Fixed &Fixed::min(const Fixed &o1, const Fixed &o2)
{
	if (o1.getRawBits() > o2.getRawBits())
		return(o2);
	return (o1);
}
