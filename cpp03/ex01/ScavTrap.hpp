#pragma once

#include "ClapTrap.hpp"
#include <string>

typedef std::string str;

class ScavTrap : public ClapTrap {
	public:
	ScavTrap(void);
	ScavTrap(const ScavTrap &copy);
	ScavTrap(const str &name);
	~ScavTrap(void);

	void attack(const str &target);
	void guardGate(void);
};
