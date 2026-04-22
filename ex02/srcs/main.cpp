#include "FragTrap.hpp"

int main(void)
{
	std::cout << "###### default constructor FragTrap ######" << std::endl;
	FragTrap a;
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << std::endl;
  	a.attack("Enemy1");
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << std::endl;
	a.takeDamage(17);
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << std::endl;
	a.beRepaired(5);
	std::cout << "Energy points: " << a.getEnergyPoints() << " | Hit points: " << a.getHitPoints() << std::endl;
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;

	std::cout << "###### parametrized constructor FragTrap ######" << std::endl;
	FragTrap b("Test");
	std::cout << "Energy points: " << b.getEnergyPoints() << " | Hit points: " << b.getHitPoints() << std::endl;
	std::cout << std::endl;
	b.attack("Enemy2");
	std::cout << "Energy points: " << b.getEnergyPoints() << " | Hit points: " << b.getHitPoints() << std::endl;
	std::cout << std::endl;
	b.takeDamage(7);
	std::cout << "Energy points: " << b.getEnergyPoints() << " | Hit points: " << b.getHitPoints() << std::endl;
	std::cout << std::endl;
	b.beRepaired(5);
	std::cout << "Energy points: " << b.getEnergyPoints() << " | Hit points: " << b.getHitPoints() << std::endl;
	std::cout << std::endl;
	b.highFivesGuys();
	std::cout << "Energy points: " << b.getEnergyPoints() << " | Hit points: " << b.getHitPoints() << std::endl;
	std::cout << std::endl;

	std::cout << "###### copy constructor FragTrap ######" << std::endl;
	FragTrap c(b);
	std::cout << "Energy points: " << c.getEnergyPoints() << " | Hit points: " << c.getHitPoints() << std::endl;
	std::cout << std::endl;
	c.attack("Enemy3");
	std::cout << "Energy points: " << c.getEnergyPoints() << " | Hit points: " << c.getHitPoints() << std::endl;
	std::cout << std::endl;
	c.takeDamage(7);
	std::cout << "Energy points: " << c.getEnergyPoints() << " | Hit points: " << c.getHitPoints() << std::endl;
	std::cout << std::endl;
	c.beRepaired(5);
	std::cout << "Energy points: " << c.getEnergyPoints() << " | Hit points: " << c.getHitPoints() << std::endl;
	std::cout << std::endl;
	c.highFivesGuys();
	std::cout << "Energy points: " << c.getEnergyPoints() << " | Hit points: " << c.getHitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "###### copy assignment FragTrap ######" << std::endl;
	FragTrap d;
	d = b;
	std::cout << "Energy points: " << d.getEnergyPoints() << " | Hit points: " << d.getHitPoints() << std::endl;
	std::cout << std::endl;
	d.attack("Enemy4");
	std::cout << "Energy points: " << d.getEnergyPoints() << " | Hit points: " << d.getHitPoints() << std::endl;
	std::cout << std::endl;
	d.takeDamage(7);
	std::cout << "Energy points: " << d.getEnergyPoints() << " | Hit points: " << d.getHitPoints() << std::endl;
	std::cout << std::endl;
	d.beRepaired(5);
	std::cout << "Energy points: " << d.getEnergyPoints() << " | Hit points: " << d.getHitPoints() << std::endl;
	std::cout << std::endl;
	d.highFivesGuys();
	std::cout << "Energy points: " << d.getEnergyPoints() << " | Hit points: " << d.getHitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}
