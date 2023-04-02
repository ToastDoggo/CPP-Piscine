#include "Zombie.hpp"

/**
 * @brief Default construct a new Zombie:: Zombie object.
 * 
 */
Zombie::Zombie()
{
	this->_name = "DefaultZombie";
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

/**
 * @brief The zombie announces itself with its name.
 * 
 */
void	Zombie::announce()
{
	std::cout << _name << ": ";
	std::cout << "BraiiiiiiiiiiiiiiiinnnzzzZZZ..." << std::endl;
}

/**
 * @brief Sets the name of the zombies.
 * 			It adds the number for clarity.
 * 
 * @param N 	-	Number of the zombie.
 * @param name 	-	Name chosen.
 */
void	Zombie::setName(int N, std::string name)
{
	std::stringstream	ss;
	std::string			num;

	ss << N;
	ss >> num;
	this->_name = name + num;
}