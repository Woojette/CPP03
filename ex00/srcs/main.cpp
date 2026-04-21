#include "ClapTrap.hpp"

int main(void)
{
  ClapTrap a("Woojette");

  for (int i = 0; i < 11; i++)
		a.attack("Clement");
	a.beRepaired(1);

	return (0);
}
