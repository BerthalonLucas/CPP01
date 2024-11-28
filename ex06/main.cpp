#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Usage: ./HarlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return 1;
    }
    Harl harl;
    std::string level = av[1];
    harl.complain(level);
    return 0;
}