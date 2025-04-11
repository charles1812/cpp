#include "FragTrap.hpp"
#include <iostream>

int main(void) {
	std::cout << "Creating default FragTrap..." << std::endl;
	FragTrap defaultFragTrap;

	std::cout << "\nCreating named FragTrap (Frappy)..." << std::endl;
	FragTrap namedFragTrap("Frappy");

	std::cout << "\nCreating copy of named FragTrap..." << std::endl;
	FragTrap copyFragTrap(namedFragTrap);

	std::cout
		<< "\nAssigning default FragTrap to a new FragTrap (AssignedFrag)..."
		<< std::endl;
	FragTrap assignedFragTrap;
	assignedFragTrap = defaultFragTrap;

	std::cout << "\nTesting attack method on named FragTrap..." << std::endl;
	for (int i = 0; i <= 100; ++i) {
		namedFragTrap.attack("Target1");
	}

	std::cout << "\nTesting takeDamage method on named FragTrap..."
			  << std::endl;
	namedFragTrap.takeDamage(30);
	namedFragTrap.takeDamage(80);

	std::cout << "\nTesting beRepaired method on named FragTrap..."
			  << std::endl;
	for (int i = 0; i <= 100; ++i) {
		assignedFragTrap.beRepaired(40);
	}

	std::cout << "\nTesting highFivesGuys method on named FragTrap..."
			  << std::endl;
	namedFragTrap.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
