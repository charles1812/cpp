/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <cspreafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 00:28:17 by cspreafi          #+#    #+#             */
/*   Updated: 2025/03/27 01:51:52 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();

		Fixed&	operator=(Fixed const &rSym);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					nb;
		static const int	bits = 8;
};

#endif
