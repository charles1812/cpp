#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : _brain(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &cat) : Animal(cat), _brain(new Brain(*cat._brain)) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
		delete _brain;
		_brain = rhs._brain;
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
