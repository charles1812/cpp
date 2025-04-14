#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
