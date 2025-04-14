#pragma once

#include <string>

class Animal {
	public:
	Animal(void);
	Animal(const Animal &animal);
	virtual ~Animal(void);

	Animal &operator=(const Animal &rhs);

	virtual void makeSound(void) const = 0;
	std::string	 getType() const;

	protected:
	std::string _type;
};
