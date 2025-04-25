#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <string>

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;
	public:
		// constructor no parameters
		Array() :	_array(0), _size(0) {} 
		// constructor with size
		Array(unsigned int n) : _array(new T[n]) , _size(n) {}
		//copy constructor
		Array(const Array &other) : _array(0), _size(0) {*this = other;}
		// copy assignment operator
		Array &operator=(const Array &other) {
			if (this != &other) 
			{
				if(_array)
					delete[] _array;
				_size = other._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i) {
					_array[i] = other._array[i];
				}
			}
			return *this;
		}
		// destructor
		~Array() {delete[] _array;}

		// operator[] overload
		T &operator[](unsigned int index) {
			if (index >= _size)
				throw std::out_of_range("Index out of range");
			return _array[index];
		}

		const T &operator[](unsigned int index) const {
			if (index >= _size)
				throw std::out_of_range("Index out of range");
			return _array[index];
		}

		// size() funtion
		unsigned int size() const {return _size;}
};

#endif