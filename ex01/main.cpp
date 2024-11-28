#include "Zombie.hpp"

int main(void) {
	try {

		int N = 65456;
		if (N < 0 || N > 1000)
			throw (N);
		Zombie *houg = zombieHorde(N, "Michel");
		delete [] houg;
	}
	catch (int Numb_of_zombie){
		if (Numb_of_zombie < 0)
			std::cout << Numb_of_zombie << " Seriously ??" << std::endl;
		else
			std::cout << Numb_of_zombie << " Zombies ?! be carful it could be the Apocalypse !" << std::endl;
	}
}