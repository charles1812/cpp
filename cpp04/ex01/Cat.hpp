#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
	Cat(void);
	Cat(const Cat &cat);
	virtual ~Cat(void);

	Cat &operator=(const Cat &rhs);

	virtual void makeSound(void) const;

	private:
	Brain *_brain;
};
