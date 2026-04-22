#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Test");

	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << "##### attack #####" << std::endl;
	for (unsigned int i = 0; i < 9; i++)
	{
		std::cout << i << ": ";
		a.attack("Enemy");
		std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	}
	a.beRepaired(1);
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;

	return (0);
}
