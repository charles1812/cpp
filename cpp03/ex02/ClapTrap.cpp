#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void)
	: name("Jean"), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
	: name(copy.name), hit_points(copy.hit_points),
	  energy_points(copy.energy_points), attack_damage(copy.attack_damage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const str &name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap named constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &src) {
		name		   = src.name;
		hit_points	   = src.hit_points;
		energy_points = src.energy_points;
		attack_damage = src.attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const str &target) {
	if (energy_points) {
		--energy_points;
		std::cout << "ClapTrap " << name << " attacks " << target
				  << ", causing " << attack_damage << " points of damage!"
				  << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " tries to attack " << target
				  << " but is too tired, he instead decides to take a nap"
				  << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " takes " << amount
			  << " points of damage";
	if (amount >= hit_points) {
		std::cout << " and dies";
		hit_points = 0;
	} else {
		hit_points -= amount;
	}
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points) {
		--energy_points;
		hit_points += amount;
		std::cout << "ClapTrap " << name << " is repaired and gains " << amount
				  << " hit points" << std::endl;
	} else {
		std::cout << "ClapTrap " << name
				  << " tries to repair itself, but he is too tired"
				  << std::endl;
	}
}
