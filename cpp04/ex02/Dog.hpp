#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal {
	public:
	Dog(void);
	Dog(const Dog &dog);
	virtual ~Dog(void);

	Dog &operator=(const Dog &rhs);

	virtual void makeSound(void) const;

	protected:
	std::string _type;

	private:
	Brain *_brain;
};
