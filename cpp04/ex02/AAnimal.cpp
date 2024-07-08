#include "AAnimal.hpp"

AAnimal::AAnimal():type("Default")
{
	std::cout << "AAnimal default consturctor called." << std::endl;
}

AAnimal::AAnimal(std::string type):type(type)
{
	std::cout << "AAnimal consturctor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj) { std::cout << "AAnimal copy consturctor called." << std::endl; *this = obj; }

AAnimal	&AAnimal::operator=(const AAnimal &obj) { std::cout << "AAnimal copy asignment operator called." << std::endl; this->type = obj.type; return (*this); }

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destrcutor called." << std::endl;
}

std::string	AAnimal::getType(void) const { return (this->type); }

void	AAnimal::makeSound(void) const { std::cout << "An AAnimal sound!" << std::endl; }