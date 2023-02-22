#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
	private:
		std::string name;
		DiamondTrap();
	
	public:
		DiamondTrap(std::string str);
		~DiamondTrap();
		void whoAmI(void);
};

#endif