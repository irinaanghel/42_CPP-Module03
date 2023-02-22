#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
	FragTrap bot("Rodolf");
	bot.attack("Goblin");
	bot.takeDamage(10);
	bot.beRepaired(2);
	bot.takeDamage(10);
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.takeDamage(2);
	bot.attack("Goblin");
	bot.highFiveGuys();
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	return (0);
}