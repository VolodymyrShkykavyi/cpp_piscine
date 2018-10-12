#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iterator>

class Span
{
	private:
		Span(void);
		std::vector<int>	_range;
		unsigned int		_n;

	public:
		~Span(void);
		Span(unsigned int);
		Span(Span const &);
		Span & operator=(Span const &);

		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);
		void				addNumber(int);
		void				addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		void				print(void);
};

#endif
