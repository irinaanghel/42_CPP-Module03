#include "../inc/ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints != 0)
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "Not enough points, sorry." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " just took " << amount << " of damage!" << std::endl;
	this->hitPoints = this->hitPoints - amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	if (this->hitPoints <= 0)
		std::cout << "You have 0 health." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		this->hitPoints = this->hitPoints + amount;
		std::cout << "ClapTrap " << this->name << " just repaired itself for " << amount << " of health!" << std::endl;
	}
	else
		std::cout << "Not enough energy points, sorry." << std::endl;
}

ClapTrap::ClapTrap(std::string str): hitPoints(10), energyPoints(10), attackDamage(0), name(str)
{
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " is alive." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "ClapTrap " << this->name << " has benn copied with copy assignment operator" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "ClapTrap " << this->name << "has been copied with copy constructor" << std::endl;
}