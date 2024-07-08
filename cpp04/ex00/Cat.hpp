#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &obj);
		Cat	&operator=(const Cat &obj);
		~Cat();
		void	makeSound(void) const;
};


#endif