#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
