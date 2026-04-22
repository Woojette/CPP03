#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
  std::cout << "FragTrap default constructor called" << std::endl;
  this->_name = "default";
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
  std::cout << "FragTrap parametrized constructor called" << std::endl;
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
  std::cout << "FragTrap copy constructor called" << std::endl;
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
    }
	return (*this);
}

void  FragTrap::attack(const std::string& target)
{
	if (!this->_hitPoints)
  {
    std::cout << "FragTrap " << this->_name << " can't attack, because it has no hit points left." << std::endl;
    return ;
  }
  if (!this->_energyPoints)
  {
    std::cout << "FragTrap " << this->_name << " can't attack, because it has no energy points left." << std::endl;
    return ;
  }
  this->_energyPoints--;
  std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void  FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}
