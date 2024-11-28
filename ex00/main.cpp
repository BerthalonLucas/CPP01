#include "Zombie.hpp"

int main(void) {
	Zombie *michel = newZombie("michel");
	Zombie toto("toto");

	michel->announce();
	toto.announce();
	delete michel;
	return 0;
}