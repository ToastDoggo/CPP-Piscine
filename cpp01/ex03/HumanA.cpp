#include "HumanA.hpp"

/**
 * @brief Construct a new Human A:: Human A object
 * 
 * @param name 		-	Name of Human A
 * @param weapon 	-	Weapon picked up by Human A
 */
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;
	std::cout << name << " picks up their ";
	std::cout << weapon.getType() << std::endl;
}

/**
 * @brief Destroy the Human A:: Human A object
 * 
 */
HumanA::~HumanA()
{
}

/**
 * @brief Displays the name and weapon that Human A has.
 * 
 */
void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}