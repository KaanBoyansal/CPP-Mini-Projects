#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <random>

template <typename T>
class Array
{
	private:
		T 				*arr;
		unsigned int	len;
	public:
		Array()
		{
			std::cout << "Default constructor called" << std::endl;
			this->arr = new T[0];
			this->len = 0;
		}

		Array(int n): len(n)
		{
			std::cout << "Constructor called" << std::endl;
			this->arr = new T[this->len];
		}

		Array(const Array &obj)
		{
			std::cout << "Copy constructor called" << std::endl;
			if (this == &obj)
				return ;
			this->len = obj.len;
			this->arr = new T[this->len];
			for (size_t i = 0; i < this->len; i++)
				this->arr[i] = obj.arr[i];
			*this = obj;
		}

		~Array()
		{
			std::cout << "Destructor called" << std::endl;
			delete [] this->arr;
		}

		Array &operator=(const Array &obj)
		{
			std::cout << "Copy assignment operator called" << std::endl;
			if (this == &obj)
				return (*this);
			delete [] this->arr;
			this->len = obj.len;
			this->arr = new T[this->len];
			for (size_t i = 0; i < this->len; i++)
				this->arr[i] = obj.arr[i];
			return (*this);
		}

		T& operator[](size_t i){
			if(i >= len)
				throw InvalidIndexException();
			return (this->arr[i]);
		}

		size_t size()const{
			return (this->len);
		}

		class InvalidIndexException : public std::exception
		{
			public:
					virtual const char	*what()const throw();
		};
};

template <typename T>
const char *Array<T>::InvalidIndexException::what()const throw() { return "Error: Invalid index"; }

#endif