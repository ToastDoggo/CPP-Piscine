#include "Weapon.hpp"

/**
 * @brief Construct a new Weapon:: Weapon object
 * 
 * @param type 
 */
Weapon::Weapon(std::string type)
{
	_type = type;
}

/**
 * @brief Destroy the Weapon:: Weapon object
 * 
 */
Weapon::~Weapon()
{
}

/**
 * @brief Gets what type of weapon is picked up.
 * 
 * @return const std::string 
 */
const std::string	Weapon::getType()
{
	return (this->_type);
}

/**
 * @brief Set the type of weapon used.
 * 
 * @param type
 */
void				Weapon::setType( const std::string type)
{
	this->_type = type;
}