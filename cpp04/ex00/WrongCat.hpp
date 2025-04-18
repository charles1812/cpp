#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
	WrongCat(void);
	WrongCat(const WrongCat &wrongCat);
	~WrongCat(void);

	WrongCat &operator=(const WrongCat &rhs);

	void makeSound(void) const;
};
