#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iostream>

class Span
{
private:
	unsigned int	N;
	std::vector<int> vec;
public:
	Span(int n);
	Span(const Span &obj);
	Span &operator=(const Span &obj);
	~Span();
	void				addNumber(int a);
	unsigned int		shortestSpan(void);
	unsigned int		longestSpan(void);
	void				fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	class SpanFull;
	class NoSpan;
};

class Span::NoSpan: public std::exception
{
	public:
		virtual const char	*what() const throw();
};

class Span::SpanFull: public std::exception
{
	public:
		virtual const char	*what() const throw();
};




#endif