#include <iostream>

class Zombie {
	private:
	const std::string _name;

	public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void announce( void ) const;
	void randomChump( std::string name );
};

Zombie* newZombie( std::string name );