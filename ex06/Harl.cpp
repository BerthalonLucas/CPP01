#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::_debug(void) {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void) {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void) {
    std::cout << "[WARNING]" << std::endl;
    std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain (std::string level) {
    void (Harl::*_debug)(void) = &Harl::_debug;
    void (Harl::*_info)(void) = &Harl::_info;
    void (Harl::*_warning)(void) = &Harl::_warning;
    void (Harl::*_error)(void) = &Harl::_error;
    int i = -1;

    i = level == "DEBUG" ? 0 : i;
    i = level == "INFO" ? 1 : i;
    i = level == "WARNING" ? 2 : i;
    i = level == "ERROR" ? 3 : i;
    switch (i) {
        case 0:
            (this->*_debug)();
			//fall through
        case 1:
            (this->*_info)();
			//fall through
        case 2:
            (this->*_warning)();
			//fall through
        case 3:
			(this->*_error)();
			break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}