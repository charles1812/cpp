#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	public:
	Dog(void);
	Dog(const Dog &dog);
	~Dog(void);

	Dog &operator=(const Dog &rhs);

	virtual void makeSound(void) const;
};
