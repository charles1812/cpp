/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:48:52 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/05 22:48:53 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(str name, Weapon &weapon);
		~HumanA();

		void	attack() const;
		
	private:
		str		name;
		Weapon	&weapon;
};

#endif