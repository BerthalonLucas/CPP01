#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie : " << _name << " added" << std::endl;
}

Zombie::Zombie() {
	std::cout << "Zombie added" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie : " << _name << " deleted" << std::endl; 
}

void Zombie::announce() const {std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
