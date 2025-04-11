#include "ScavTrap.hpp"
#include <iostream>

int main() {
	ScavTrap defaultScavTrap;
	std::cout << std::endl;

	ScavTrap namedScavTrap("Scavvy");
	std::cout << std::endl;

	ScavTrap copyScavTrap(namedScavTrap);
	std::cout << std::endl;

	ScavTrap assignedScavTrap;
	assignedScavTrap = defaultScavTrap;
	std::cout << std::endl;

	for (int i = 0; i <= 50; ++i) {
		namedScavTrap.attack("Target1");
	}
	std::cout << std::endl;

	namedScavTrap.takeDamage(30);
	namedScavTrap.takeDamage(80);
	std::cout << std::endl;

	for (int i = 0; i <= 50; ++i) {
		assignedScavTrap.beRepaired(40);
	}
	std::cout << std::endl;

	namedScavTrap.guardGate();
	std::cout << std::endl;

	return (0);
}
