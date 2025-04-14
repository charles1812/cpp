#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	const Animal *animal[10];
	for (int i = 0; i < 5; ++i) {
		animal[i] = new Dog();
	}
	for (int i = 5; i < 10; ++i) {
		animal[i] = new Cat();
	}

	for (int i = 0; i < 10; ++i) {
		delete animal[i];
	}

	Dog*	bob = new Dog;
	Dog*	robert = new Dog(*bob);
	Cat*	jean = new Cat;
	Cat*	pierre = new Cat(*jean);

	delete bob;
	delete robert;
	delete jean;
	delete pierre;

	//Animal albert; //Doesn't work
	return (0);
}
