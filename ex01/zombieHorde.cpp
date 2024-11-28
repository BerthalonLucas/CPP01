#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *sting = new Zombie[N];
	for (int i = 0; i < N; i++) {
		sting[i].setName(name);
		sting[i].announce();
	}
	return sting;
}