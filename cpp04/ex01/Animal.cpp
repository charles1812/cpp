#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) : _type(animal._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "Ā̶̢̧̢̧̘̟͕͉͖͈̹͙̻͇͕͕̥̬͇̩͕̳̔͜͜A̴̛̳͖͍͖͍͂̃̐̄̈́̈́̋̄̅͘A̸̯̟̯̯̪͗Ą̷̢͉͈̖͙͍̻̱̺̟̠̰̙͔̦̘͍̼̲́̄̎̎̾͐̐͗̇̄̑̍͐̅͑̒̈̕͝͠ͅA̷̧̜͙̗̲̳̜̥̰̗̣̯̜͂̓̀͜͜͝A̸̟̝̲̥̠̦̥͔͚͑͐̂̅̀̈́̆̊̆̋͊̊̓͐͠͝͠ͅA̵̧̡̡̡̩̩͙̘̤͙̖̖̻̘̖̹̣͈͈͍͓̘̙͊́̍̈́͗̃̇̏̐̓̌͑̔́̿̆͂̒̕͜͝Ả̴̡̡̧͖͍̱͎̮͍͖͓̜̠̻̤̦̩̻̦̐̇͛̐͊̚̕̚̚Á̵̧̡̛̻̣̍͒̏̊̄͛̃͜͠Ą̸̨̧̨̗̣͈̝̦͈̫͓̩̣̞̦̠̻̜̻̫̙͛́Ȁ̴̢̨̡͙̬͇͉̟͖̥͔̜̣͈̖̳̣̀̏̆̈́͛̈́͜Â̵̢͈̘̜̔̇̂̂́̇̈́̓̿̓͛̃̂́̐̆̕͘̚͠A̵̺̱̯͇̦̖͈͙̣̗̪͎̣͔̿̈̑̅̀̔ͅÁ̴̙̏͑͗̀A̶̙̱̗̤͆͐̚ͅA̸̛̭͗̒̎͛̐̀͋͌ͅA̸̡̢̬̬̟͍̥̰͖̫̜̤̮̦͚̘̞̥̠̬͖̅̈́̆̾̎A̸̢̰͈̟̥͇͙̺̪̩̳̣͖̟̟̲̻̔̆̏͆͗̚͝͝Ả̸̪͙̺͙̟̗̘̳̳̘̦̰͂͆̎̐͐̋́͑͋͐̊͂̎͘̕͝A̵̠͇͙̩̥̙̯̋͋͑͆̏́̈̇̆̽̐̕̚̕̕̚͝͝" << std::endl;
}

std::string Animal::getType(void) const {
	return (_type);
}
