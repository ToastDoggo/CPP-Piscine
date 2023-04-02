#include "Zombie.hpp"

/**
 * @brief Creates a new zombie from the class Zombie on a heap, setting its name and announcing itself.
 * 
 * @param name		-	 Name of the zombie.
 * @return Zombie* 
 */
Zombie*		newZombie( std::string name )
{
	Zombie	*allocatedZombie = new Zombie(name);

	allocatedZombie->announce();
	return (allocatedZombie);
}
