#include "Zombie.hpp"

int	main()
{
	Zombie 	*zombies;
	int		N = 10;
	zombies = zombieHorde(N, "Ralph");
	
	delete [] zombies;
	return (0);
}