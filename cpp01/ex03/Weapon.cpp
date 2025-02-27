/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:47:52 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/06 03:40:41 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(str type) {
	this->type = type;
}

Weapon::~Weapon() {
	
}

const str	&Weapon::getType() const {
	return this->type;
}


void	Weapon::setType(str ntype) {
	this->type = ntype;
}
