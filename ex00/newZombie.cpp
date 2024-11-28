#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie *michel = new Zombie(name);
	return michel;
}
