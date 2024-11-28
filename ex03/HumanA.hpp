#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
	private:
	std::string _name;
	Weapon &_Weapon;

	public:
	HumanA(std::string _name, Weapon &Weapon_type);
	~HumanA();
	void attack();

};

#endif