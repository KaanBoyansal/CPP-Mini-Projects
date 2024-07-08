/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:19:11 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/21 20:41:46 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_fixedValue(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::Fixed(Fixed &cpy) { std::cout << "Copy constructor called" << std::endl; *this = cpy; }
Fixed	&Fixed::operator=(Fixed &obj) { std::cout << "Copy assignment operator called" << std::endl; this->_fixedValue = obj.getRawBits(); return (*this);}
Fixed::~Fixed() {std::cout << "Desctructor called" << std::endl;}
int	Fixed::getRawBits(void) {std::cout << "Get raw bits member function called" << std::endl; return (this->_fixedValue); }
void	Fixed::setRawBits(int const raw) {std::cout << "Set raw bits member function called" << std::endl; this->_fixedValue = raw; }
