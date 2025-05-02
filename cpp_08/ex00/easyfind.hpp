#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T &cont, int n)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), n);
	if (it != cont.end())
        std::cout << "Found " << n << " in container" << std::endl;
    else
        std::cout << "Not found " << n << " in container" << std::endl;
}

#endif