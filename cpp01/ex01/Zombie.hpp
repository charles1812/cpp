/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:48:36 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/05 22:48:38 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

typedef std::string str;

class Zombie {
	public:
		Zombie();
		~Zombie();

		void			setName(str name);
		void			announce() const;

	private:
		str		name;
};

Zombie	*zombieHorde(int n, str name);

#endif