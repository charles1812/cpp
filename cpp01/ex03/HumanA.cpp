/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:47:03 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/06 03:39:59 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(str name, Weapon &weapon) : name(name), weapon(weapon) {
	
}

HumanA::~HumanA() {
	
}

void	HumanA::attack() const {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
