#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <random>

class Base
{
	public:
		virtual ~Base();
};

class C : public Base
{};

class B : public Base
{};

class A : public Base
{};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);


#endif