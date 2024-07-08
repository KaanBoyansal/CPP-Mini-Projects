#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_wep;
		std::string name;
	public:
		HumanA(std::string name, Weapon &wep);
		~HumanA();
		void	attack();
};


#endif