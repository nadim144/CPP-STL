// Vector_(9)_find_element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintVector(vector<int>& v)
{
    cout << "Printing vector v ..." << endl;
    cout << "size of vector v = " << v.size() << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

size_t FindElement(vector<int>& v, int k)
{
    vector<int>::iterator it = find(v.begin(), v.end(), k);
    if (it != v.end())
    {
        return (it - v.begin());
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> v = { 1, 45, 54, 71, 76, 17 };
    PrintVector(v);
    
    size_t index = FindElement(v, 71);
    if (index >= 0)
    {
        cout << "Element found at Index : " << index << endl;
    }
    else
    {
        cout << "Element not found in vector ..." << endl;
    }

	return 0;
}

