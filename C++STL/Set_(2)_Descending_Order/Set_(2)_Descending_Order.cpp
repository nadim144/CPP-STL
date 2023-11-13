// Set_(2)_Descending_Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    (1) Create empty set and add some values it and then print in decending order.
*/

#include <iostream>
#include <set>
using namespace std;

void PrintSet(set<int, greater<int>>& s)
{
    cout << "size of set s = " << s.size() << endl;
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    set<int, greater<int>> s; //Empty set of integer

    // add some elements into set
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(7);
    s.insert(5);
    s.insert(8);
    s.insert(6);
    s.insert(6);
    s.insert(8);
    s.insert(7);
    
    PrintSet(s);

    return 0;
}

