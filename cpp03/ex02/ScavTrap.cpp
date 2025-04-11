#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	hit_points	   = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const str &name) : ClapTrap(name) {
	std::cout << "ScavTrap named constructor called" << std::endl;
	hit_points	   = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const str &target) {
	if (energy_points) {
		--energy_points;
		std::cout << "ScavTrap " << name << " attacks " << target
				  << ", causing " << attack_damage << " points of damage!"
				  << std::endl;
	} else {
		std::cout << "ScavTrap " << name << " tries to attack " << target
				  << " but is too tired, he instead decides to take a nap"
				  << std::endl;
	}
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode"
			  << std::endl;
}
