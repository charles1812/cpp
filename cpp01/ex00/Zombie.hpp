#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Zombie {
public:
    Zombie(str name);
    ~Zombie();

    Zombie* newZombie(str name);
    void    randomChump(str name);

private:
    str name;
    void announce();
};


#endif