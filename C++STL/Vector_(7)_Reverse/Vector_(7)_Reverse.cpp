// Vector_(7)_Reverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
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
    vector<int> v = { 1, 45, 54, 71, 76, 12 };
    cout << "Printing vector before reverse ..." << endl;
    PrintVector(v);
    cout << endl;

    reverse(v.begin(), v.end());

    cout << "Printing vector after reverse ..." << endl;
    PrintVector(v);
	return 0;
}

