#include "../inc/FragTrap.hpp"

void FragTrap::highFiveGuys(void)
{
    if(--this->energyPoints > 0 && this->hitPoints != 0) 
        std::cout << "FragTrap " << this->name << " high fives everybody." << std::endl;
    else
        std::cout << "Not enough points, sorry." << std::endl;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
    this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
    std::cout << "ClapTrap " << this->name << " will server as a FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->name << " dutti's over." 
        << std::endl;
}
