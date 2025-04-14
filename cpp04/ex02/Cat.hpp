#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal {
	public:
	Cat(void);
	Cat(const Cat &cat);
	virtual ~Cat(void);

	Cat &operator=(const Cat &rhs);

	virtual void makeSound(void) const;

	protected:
	std::string _type;

	private:
	Brain *_brain;
};
