#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie added" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie : " << _name << " deleted" << std::endl; 
}

void Zombie::announce() const {std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;}

void Zombie::setName(std::string name) {this->_name = name ;}