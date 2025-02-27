/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:48:56 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/05 22:48:57 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(str name);
		~HumanB();
		
		void	attack() const;
		void	setWeapon(Weapon &weapon);
	private:
		str		name;
		Weapon	*weapon;
};

#endif