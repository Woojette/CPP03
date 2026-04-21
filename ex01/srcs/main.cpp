#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "###### create ScavTrap ######" << std::endl;
  ScavTrap a("Woojette");
	std::cout << std::endl;

	std::cout << "###### attack ScavTrap ######" << std::endl;
	a.attack("Clement");
	std::cout << std::endl;

	std::cout << "###### guard ScavTrap ######" << std::endl;
	a.guardGate();
	std::cout << std::endl;

	return (0);
}
