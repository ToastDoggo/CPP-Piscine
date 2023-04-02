#include "Zombie.hpp"

/**
 * @brief Creates a horde of zombies.
 * 
 * @param N 	-	Number of zombies to create.
 * @param name 	-	Name for the zombies.
 * @return Zombie* 	Returns the horde, NULL if the number is not valid.
 */
Zombie*		zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "We need positive zombies!" << std::endl;
		return (NULL);
	}
	Zombie		*wholeHorde = new Zombie[N];
	while (N-- > 0)
	{
		wholeHorde[N].setName(N, name);
		wholeHorde[N].announce();
	}
	return (wholeHorde);
}