#include <iostream>

int main() {
	std::string babouche = "HI THIS IS BRAIN";
	std::string* stringptr = &babouche;
	std::string& refptr = babouche;

	std::cout << &babouche << std::endl;
	std::cout << stringptr << std::endl;
	std::cout << &refptr << std::endl;

	std::cout << babouche << std::endl;
	std::cout << *stringptr << std::endl;
	std::cout << refptr << std::endl;
}