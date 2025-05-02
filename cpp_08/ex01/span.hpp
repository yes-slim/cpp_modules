#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
        std::vector<int> _numbers;
        unsigned int _maxSize;
    public:
        Span(unsigned int N);

        void addNumber(int n);

        int shortestSpan() const;
        int longestSpan() const;
		
        void addRange(int first, int last);
};

#endif