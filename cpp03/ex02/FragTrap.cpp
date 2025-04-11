#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	hit_points	   = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	name		   = copy.name;
	hit_points	   = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap named constructor called" << std::endl;
	hit_points	   = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (energy_points) {
		--energy_points;
		std::cout << "FragTrap " << name << " attacks " << target
				  << ", causing " << attack_damage << " points of damage!"
				  << std::endl;
	} else {
		std::cout << "FragTrap " << name << " tries to attack " << target
				  << " but is too tired, he instead decides to take a nap"
				  << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests high fives!" << std::endl;
}
