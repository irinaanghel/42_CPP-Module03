#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
	ScavTrap bot("Joca");
	bot.attack("Goblin");
	bot.takeDamage(10);
	bot.beRepaired(2);
	bot.takeDamage(10);
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.takeDamage(2);
	bot.attack("Goblin");
	bot.guardGate();
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	return (0);
}