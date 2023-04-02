#include "Zombie.hpp"

/**
 * @brief Creates a new zombie from the class Zombie on a stack, setting its name and announcing itself.
 * 
 * @param name 	-	 Name of the zombie.
 */
void	randomChump(std::string name)
{
	Zombie	temporaryZombie(name);
	temporaryZombie.announce();
}
