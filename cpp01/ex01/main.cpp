#include "Zombie.hpp"

int main() {
    Zombie *z = NULL;

    z = zombieHorde(5, "test");

    delete[] z;
    return 0;
}