#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

typedef std::string str;

class Harl {
    private:
        int lvl;

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl();
        ~Harl();

        void complain(str level);

}

#endif