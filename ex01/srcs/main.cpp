#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "###### create ScavTrap ######" << std::endl;
	ScavTrap a("Test");
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "###### attack ScavTrap ######" << std::endl;
	a.attack("Enemy");
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "###### guard ScavTrap ######" << std::endl;
	a.guardGate();
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << std::endl;

	return (0);
}
