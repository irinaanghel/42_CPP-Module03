#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();
	
	public:
		ScavTrap(std::string str);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif
