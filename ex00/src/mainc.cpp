#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap	game;

	game.attack("Gladiator");
	game.takeDamage(10);
	game.beRepaired(2);
	game.takeDamage(10);
	game.attack("Gladiator");
	game.attack("Gladiator");
	game.beRepaired(8);
	game.attack("Gladiator");
	game.takeDamage(9);
	game.beRepaired(8);
	game.attack("Gladiator");
	return (0);
}