#include "Span.hpp"

Span::Span(int n) { this->N = n; }

Span::~Span() { this->vec.clear(); }

Span::Span(const Span &obj)
{
	this->N = obj.N;
	this->vec = obj.vec;
	*this = obj;
}

Span	&Span::operator=(const Span &obj)
{
	this->N = obj.N;
	this->vec = obj.vec;
	return (*this);
}

const char	*Span::SpanFull::what() const throw()
{
	return "Span is full you cant add more number in it!";
}

void	Span::addNumber(int a)
{
	if (this->vec.size() < this->N && this->N)
		this->vec.push_back(a);
	else
		throw Span::SpanFull();
}

const char	*Span::NoSpan::what() const throw()
{
	return "There must be more numbers to compare!";
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	span = UINT_MAX;

	if (this->vec.empty() || this->vec.size() == 1)
		throw Span::NoSpan();
	std::vector<int> copy(this->vec);
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size() - 1; i++)
		if (static_cast<unsigned int>(abs(copy[i] - copy[i + 1])) < span)
			span = abs(copy[i] - copy[i + 1]);
	return (span);
}

unsigned int Span::longestSpan()
{
	if (this->vec.size() < 2)
		throw NoSpan();
	std::vector<int> copy(this->vec);
	std::sort(copy.begin(), copy.end());
	return (copy[copy.size() - 1] - copy[0]);
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin > end)
		return ;
	while (begin != end){
		if (this->vec.size() < this->N)
			this->vec.push_back(*begin);
		else
			throw Span::SpanFull();
		begin++;
	}
}
