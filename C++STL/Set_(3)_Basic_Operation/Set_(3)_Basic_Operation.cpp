// Set_(3)_Basic_Operation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Basic Operation
    ---------------
    (1) - Create empty set of integer, add some elements and print it (by default accending order)
    (2) - Assigning the elements from s1 to s2
    (3) - Remove all elements up to 30 in s2
    (4) - Remove element with value 50 in s2
*/

#include <iostream>
#include <set>
using namespace std;

void PrintSet(set<int>& s)
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
    // (1)
    set<int> s1; // Empty set of integer
    // Add some elements into it.
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // only one 10 will be added to the set
    s1.insert(50);
    s1.insert(10);
    PrintSet(s1);

    // (2) Create s2, Assigning the elements from s1 to s2
    cout << endl;
    cout << "(2) : Create s2, Assigning the elements from s1 to s2" << endl;
    set<int> s2(s1.begin(), s1.end());
    PrintSet(s2);

    // (3) Remove all elements up to 30 in s2.
    cout << endl;
    cout << "(3) Remove all elements up to 30 in s2." << endl;

    // (3).1 - 1st way - find iterator of 30 and then run loop to remove
    set<int>::iterator it = s2.find(30);
    s2.erase(s2.begin(), it);
    PrintSet(s2);

    // (3).2 2nd Way
    cout << endl;
    s2.erase(s2.begin(), s2.find(30));
    PrintSet(s2);

    // (4) Remove element with value 50 in s2
    cout << endl;
    cout << "(4) : Remove element with value 50 in s2" << endl;
    set<int>::iterator itr = s2.find(50);
    s2.erase(itr);
    PrintSet(s2);



    return 0;
}

