#include "Cat.hpp"

Cat::Cat(): Animal("Cat") { std::cout << "Cat default constructor called" << std::endl; }

Cat::Cat(const Cat &obj) { std::cout << "Cat copy constructor called" << std::endl; *this = obj; }

Cat	&Cat::operator=(const Cat &obj) { std::cout << "Cat copy asignment operator called" << std::endl; this->type = obj.type; return (*this); }

void	Cat::makeSound(void) const { std::cout << "MEOW MEOW MEOW MEOW!" << std::endl; }

Cat::~Cat() { std::cout << "Cat destructor called." << std::endl; }