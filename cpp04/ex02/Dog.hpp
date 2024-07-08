#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog: public AAnimal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog &obj);
		Dog	&operator=(const Dog &obj);
		~Dog();
		std::string getType( void ) const;
		void	makeSound(void) const;
};


#endif