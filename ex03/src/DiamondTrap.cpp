#include "../inc/DiamondTrap.hpp"

void DiamondTrap::whoAmI(void)
{
        std::cout << "I am DiamondTrap " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap::DiamondTrap(std::string str): ClapTrap(str), FragTrap(str), ScavTrap(str)
{
    this->name = str;
    ClapTrap::name = str + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << this->name << " is a ClapTrap Monster!!!" << " Half Scav! Half Frag!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->name << " moster days are over." << std::endl;
}
