// Vector_(8)_min_max_element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    min_element(v.begin(), v.end()) - To find min element in vector v
    max_element(v.begin(), v.end()) - To find max element in vector v.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintVector(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v{ 1, 45, 54, 71, 76, 12 };
    cout << "Print vector element : ";
    PrintVector(v);

    cout << "Minimum element in vector v = " <<*min_element(v.begin(), v.end())<<endl;
    cout << "Maxmimum element in vector v = " <<*max_element(v.begin(), v.end())<<endl;

    return 0;
}

