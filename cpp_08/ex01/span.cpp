#include "span.hpp"
#include <stdexcept>
#include <limits>
#include <algorithm>

Span::Span(unsigned int N) : _maxSize(N) {}

void Span::addNumber(int n) {
    if (_numbers.size() >= _maxSize)
        throw std::out_of_range("Span is full");
    _numbers.push_back(n);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers for a span");
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); ++i) {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers for a span");
    int minVal = *std::min_element(_numbers.begin(), _numbers.end());
    int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
    return maxVal - minVal;
}

void Span::addRange(int first, int last) {
    if (first > last)
        std::swap(first, last);
    size_t count = last - first;
    if (_numbers.size() + count > _maxSize)
        throw std::out_of_range("Adding range exceeds Span capacity");
    for (int i = first; i < last; ++i)
        _numbers.push_back(i);
}