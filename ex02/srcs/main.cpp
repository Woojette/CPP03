#include "FragTrap.hpp"

int main(void)
{
	std::cout << "###### default constructor FragTrap ######" << std::endl;
	FragTrap a;
  a.attack("Clement1");
	a.takeDamage(17);
	a.beRepaired(5);
	a.highFivesGuys();
	std::cout << std::endl;

	std::cout << "###### parametrized constructor FragTrap ######" << std::endl;
	FragTrap b("Woojette");
  b.attack("Clement2");
	b.takeDamage(7);
	b.beRepaired(5);
	b.highFivesGuys();
	std::cout << std::endl;

	std::cout << "###### copy constructor FragTrap ######" << std::endl;
	FragTrap c(b);
  c.attack("Clement3");
	c.takeDamage(7);
	c.beRepaired(5);
	c.highFivesGuys();
	std::cout << std::endl;

	std::cout << "###### copy assignment FragTrap ######" << std::endl;
	FragTrap d;
	d = b;
  d.attack("Clement4");
	d.takeDamage(7);
	d.beRepaired(5);
	d.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
