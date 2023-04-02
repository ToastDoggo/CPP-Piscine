#include "HumanB.hpp"

/**
 * @brief Construct a new Human B:: Human B object
 * 
 * @param name 		-	Name of Human B
 */
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

/**
 * @brief Destroy the Human B:: Human B object
 * 
 */
HumanB::~HumanB()
{
}

/**
 * @brief Sets the type of weapon for Human B.
 * 
 * @param weapon 
 */
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

/**
 * @brief Displays the name and weapon that Human B has.
 * 
 */
void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else
		std::cout << "... bare hands?" << std::endl;
}