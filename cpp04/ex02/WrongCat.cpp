#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat") { std::cout << "Cat default constructor called" << std::endl; }

WrongCat::WrongCat(const WrongCat &obj) { std::cout << "Cat copy constructor called" << std::endl; *this = obj; }

WrongCat	&WrongCat::operator=(const WrongCat &obj) { std::cout << "Cat copy asignment operator called" << std::endl; this->type = obj.type; return (*this); }

void	WrongCat::makeSound(void) const { std::cout << "MEOW MEOW MEOW MEOW!" << std::endl; }

WrongCat::~WrongCat() { std::cout << "Cat destructor called." << std::endl; }