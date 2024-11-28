#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _Weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const {
	if (!this->_Weapon)
		std::cout << _name << "y peu pas attacke zeubi " << std::endl;
	else
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon) {
    _Weapon = &Weapon;
}