#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon_type) : _name(name), _Weapon(Weapon_type) {}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}