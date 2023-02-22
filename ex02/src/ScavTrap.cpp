#include "../inc/ScavTrap.hpp"

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in keeper mode."  << std::endl;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ClpTrap " << this->name << " will server as a ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ClapTrap " << this->name << " dutti's over." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (--this->energyPoints > 0 && this->hitPoints < 0)
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "Not enough points, sorry." << std::endl;
}