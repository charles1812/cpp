/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:49:02 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/05 22:49:03 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

typedef std::string str;

class Weapon {
	public:
		Weapon();
		Weapon(str type);
		~Weapon();

		const str	&getType() const;
		void		setType(str ntype);
	private:
		str	type;
};

#endif