/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:48:43 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/05 22:48:44 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

typedef std::string str;

class Zombie {
	public:
		Zombie(str name);
		~Zombie();

		Zombie* newZombie(str name);
		void	randomChump(str name);
	private:
		void	announce();
		str	name;
};


#endif