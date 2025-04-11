#pragma once

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public:
	FragTrap(void);
	FragTrap(const FragTrap &copy);
	FragTrap(const std::string &name);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &rhs);

	void attack(const std::string &target);
	void highFivesGuys(void);
};
