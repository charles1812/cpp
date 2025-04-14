#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void) {
	const Animal *meta = new Animal();
	const Animal *j	   = new Dog();
	const Animal *i	   = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	delete meta;
	delete j;
	delete i;

	const WrongAnimal *wmeta = new WrongAnimal();
	const WrongAnimal *wj	 = new WrongCat();
	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << wj->getType() << " " << std::endl;
	wmeta->makeSound();
	wj->makeSound();
	delete wmeta;
	delete wj;
	return (0);
}
