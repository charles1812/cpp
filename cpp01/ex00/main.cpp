#include "Zombie.hpp"

int main() {
    Zombie *z = NULL;

    z = z->newZombie("test");
    z->randomChump("test2");
    delete z;
}