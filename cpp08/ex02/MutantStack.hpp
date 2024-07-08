#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>
#include <vector>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(void){}
		MutantStack(const MutantStack& copy){
			*this = copy;
		}
		MutantStack& operator=(const MutantStack& value){
			if (this != &value)
				this->c = value.c;
			return *this;
		}

		~MutantStack(void) { }

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};