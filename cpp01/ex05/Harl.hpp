/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:49:49 by cspreafi          #+#    #+#             */
/*   Updated: 2025/02/05 22:49:50 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Harl {
	public:
		Harl();
		~Harl();

		void	complain(str level);

	private:
		void	debug() const;
		void	info() const;
		void	warning() const;
		void	error() const;
};

#endif