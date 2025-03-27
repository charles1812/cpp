/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 00:28:13 by cspreafi          #+#    #+#             */
/*   Updated: 2025/03/27 01:51:54 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	this->nb = src.getRawBits();
}

Fixed&	Fixed::operator=(Fixed const &rSym) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->nb = rSym.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->nb;
}

void	Fixed::setRawBits(int const raw) {
	this->nb = raw;
}
