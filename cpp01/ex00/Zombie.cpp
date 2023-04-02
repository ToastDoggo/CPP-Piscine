#include "Zombie.hpp"

/**
 * @brief Default construct a new Zombie:: Zombie object.
 * 
 */
Zombie::Zombie()
{
	this->_name = "DefaultZombie";
	std::cout << "Say hi to " << _name << "!" << std::endl;
}

/**
 * @brief Construct a new Zombie:: Zombie object.
 * 
 * @param name 	-	Name of the zombie.
 */
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Say hi to " << _name << "!" << std::endl;
}

/**
 * @brief Destroy the Zombie:: Zombie object. It announces with a message when it has been destroyed.
 * 
 */
Zombie::~Zombie()
{
	std::cout << _name << " destroyed itself in confusion." << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": ";
	std::cout << "BraiiiiiiiiiiiiiiiinnnzzzZZZ..." << std::endl;
}