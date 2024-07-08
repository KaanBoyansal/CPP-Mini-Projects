#ifndef Cat_HPP
# define Cat_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat: public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat	&operator=(const Cat &obj);
		~Cat();
		std::string	getType( void ) const;
		void	makeSound(void) const;
};


#endif