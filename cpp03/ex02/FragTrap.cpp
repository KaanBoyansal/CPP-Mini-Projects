#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->dmg = 30;
	this->energy = 100;
	this->hitpt = 100;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->dmg = 30;
	this->energy = 100;
	this->hitpt = 100;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = obj.name;
	this->dmg = obj.dmg;
	this->energy = obj.energy;
	this->hitpt = obj.hitpt;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) { std::cout << "Give me five guys!" << std::endl; }
