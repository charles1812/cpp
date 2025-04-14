#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) {
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}
