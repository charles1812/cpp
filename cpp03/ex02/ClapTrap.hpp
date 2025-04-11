#pragma once

#include <string>

typedef std::string str;

class ClapTrap {
	public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &copy);
	ClapTrap(const str &name);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &rhs);

	void attack(const str &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected:
	std::string	 name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;
};
