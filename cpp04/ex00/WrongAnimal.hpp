#pragma once

#include <string>

class WrongAnimal {
	public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &wronganimal);
	~WrongAnimal(void);

	WrongAnimal &operator=(const WrongAnimal &rhs);

	void		makeSound(void) const;
	std::string getType() const;

	protected:
	std::string _type;
};
