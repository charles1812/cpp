#pragma once

#include "Animal.hpp"

class Cat : public Animal {
	public:
	Cat(void);
	Cat(const Cat &cat);
	~Cat(void);

	Cat &operator=(const Cat &rhs);

	virtual void makeSound(void) const;
};
