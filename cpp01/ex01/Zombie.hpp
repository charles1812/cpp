#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Zombie {
public:
    Zombie();
    ~Zombie();

    void    announce();
    void    setName(str name);

private:
    str name;
};

Zombie *zombieHorde( int n, str name);

#endif