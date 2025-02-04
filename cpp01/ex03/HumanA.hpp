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