/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:45:16 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/05 22:45:41 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name) {
	int		i = -1;
	Zombie	*horde = new Zombie[n];

	while (++i < n) {
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}