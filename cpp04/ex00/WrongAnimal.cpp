#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
	: _type(wronganimal._type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Ā̶̢̧̢̧̘̟͕͉͖͈̹͙̻͇͕͕̥̬͇̩͕̳̔͜͜A̴̛̳͖͍͖͍͂̃̐̄̈́̈́̋̄̅͘A̸̯̟̯̯̪͗Ą̷̢͉͈̖͙͍̻̱̺̟̠̰̙͔̦̘͍̼̲́̄̎̎̾͐̐͗̇̄̑̍͐̅͑̒̈̕͝͠ͅA̷̧̜͙̗̲̳̜̥̰̗̣̯̜͂̓̀͜͜͝A̸̟̝̲̥̠̦̥͔͚͑͐̂̅̀̈́̆̊̆̋͊̊̓͐͠͝͠ͅA̵̧̡̡̡̩̩͙̘̤͙̖̖̻̘̖̹̣͈͈͍͓̘̙͊́̍̈́͗̃̇̏̐̓̌͑̔́̿̆͂̒̕͜͝Ả̴̡̡̧͖͍̱͎̮͍͖͓̜̠̻̤̦̩̻̦̐̇͛̐͊̚̕̚̚Á̵̧̡̛̻̣̍͒̏̊̄͛̃͜͠Ą̸̨̧̨̗̣͈̝̦͈̫͓̩̣̞̦̠̻̜̻̫̙͛́Ȁ̴̢̨̡͙̬͇͉̟͖̥͔̜̣͈̖̳̣̀̏̆̈́͛̈́͜Â̵̢͈̘̜̔̇̂̂́̇̈́̓̿̓͛̃̂́̐̆̕͘̚͠A̵̺̱̯͇̦̖͈͙̣̗̪͎̣͔̿̈̑̅̀̔ͅÁ̴̙̏͑͗̀A̶̙̱̗̤͆͐̚ͅA̸̛̭͗̒̎͛̐̀͋͌ͅA̸̡̢̬̬̟͍̥̰͖̫̜̤̮̦͚̘̞̥̠̬͖̅̈́̆̾̎A̸̢̰͈̟̥͇͙̺̪̩̳̣͖̟̟̲̻̔̆̏͆͗̚͝͝Ả̸̪͙̺͙̟̗̘̳̳̘̦̰͂͆̎̐͐̋́͑͋͐̊͂̎͘̕͝A̵̠͇͙̩̥̙̯̋͋͑͆̏́̈̇̆̽̐̕̚̕̕̚͝͝" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (_type);
}
