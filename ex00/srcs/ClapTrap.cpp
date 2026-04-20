#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->_name = "name";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "Parametrized constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap&   operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
		this->_name = name;
		this->_hitPoints = 10;
		this->_energyPoints = 10;
		this->_attackDamage = 0;
    }
	return (*this);
}

void	attack(const std::string& target)
{
	
}

void	takeDamage(unsigned int amount)
{

}

void	beRepaired(unsigned int amount)
{

}
