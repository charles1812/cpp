#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap defaultClapTrap;
	std::cout << std::endl;

	ClapTrap namedClapTrap("Bob");
	std::cout << std::endl;

	ClapTrap copyClapTrap(namedClapTrap);
	std::cout << std::endl;

	ClapTrap assignedClapTrap;
	assignedClapTrap = defaultClapTrap;
	std::cout << std::endl;

	for (int i = 0; i <= 10; ++i) {
		namedClapTrap.attack("Target1");
	}
	std::cout << std::endl;

	namedClapTrap.takeDamage(3);
	namedClapTrap.takeDamage(8);
	std::cout << std::endl;

	for (int i = 0; i <= 10; ++i) {
		assignedClapTrap.beRepaired(1);
	}
	std::cout << std::endl;

	return (0);
}
