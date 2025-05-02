#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
    std::vector<int> myVector;
    std::list<double> myList;
    myVector.push_back(2);
    myVector.push_back(1);
    myVector.push_back(3);
    myVector.push_back(4);
    myList.push_back(2);
    myList.push_back(1);
    myList.push_back(4);
    easyfind(myList, 3);
	easyfind(myVector, 3);
    return 0;
}