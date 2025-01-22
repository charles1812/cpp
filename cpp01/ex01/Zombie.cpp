#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::~Zombie(){
    std::cout << this->name << ": is dead" << std::endl;
}

void    Zombie::announce(){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(str name){
    this->name = name;
}