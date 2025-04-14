#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : _brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*dog._brain)) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
		delete _brain;
		_brain = rhs._brain;
	}
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}
