#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; ++i) {
			ideas[i] = rhs.ideas[i];
		}
	}
	return (*this);
}
