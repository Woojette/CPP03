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

ClapTrap&   ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
    }
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack, because it has no hit points left." << std::endl;
        return ;
    }
    if (!this->_energyPoints)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack, because it has no energy points left." << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " is already destroyed. (hit points 0)" << std::endl;
        return ;
    }
    if (this->_hitPoints <= amount)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " can't repair itself because it has no hit points left." << std::endl;
        return ;
    }
    if (!this->_energyPoints)
    {
        std::cout << "ClapTrap " << this->_name << " can't repair itself because it has no energy points left." << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " repairs itself and gains " << amount << " hit points!" << std::endl;
}
