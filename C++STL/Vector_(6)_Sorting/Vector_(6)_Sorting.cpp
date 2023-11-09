// Vector_(6)_Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    soting vector using accending and desccending order
*/

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

int main()
{
    vector<int> v = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    cout << "Print vector before sorting ..." << endl;
    PrintVector(v);
    
    sort(v.begin(), v.end(), less<int>());
    
    cout << "Print vector after sorting accending order..." << endl;
    PrintVector(v);

    //================================================
    v.clear();
    v = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    cout << "Print vector before sorting ..." << endl;
    PrintVector(v);

    sort(v.begin(), v.end(), greater<int>());

    cout << "Print vector after sorting decending order..." << endl;
    PrintVector(v);
    return 0;
}

