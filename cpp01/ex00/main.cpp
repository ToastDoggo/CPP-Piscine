#include "Zombie.hpp"

int	main()
{
	Zombie	parentZombie;
	Zombie	*notDefault[2];

	parentZombie.announce();
	std::cout << "\tZombies who want to stay (but won't):" << std::endl;
	notDefault[0] = newZombie("Another one");
	notDefault[1] = newZombie("Bites the dust");
	delete notDefault[0];
	delete notDefault[1];

	std::cout << "\tTemporary zombies:" << std::endl;
	randomChump("Leroy");
	randomChump("Jenkins");

	std::cout << "\tAnd our special guest bids farewell:" << std::endl;
	return (0);
}