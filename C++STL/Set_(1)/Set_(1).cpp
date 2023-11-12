// Set_(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    (1) Create empty set and add some values it and then print.
*/

#include <iostream>
#include <set>
using namespace std;

void PrintSet(set<char>& s)
{
    cout << "size of Set s = " << s.size() << endl;
    for (set<char>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " " << endl;
    }
    cout << endl;
}

int main()
{
    set<char> s; // Empty set of character types
    
    // add few eleements into set
    s.insert('G');
    s.insert('H');
    s.insert('G');
    s.insert('H');
    s.insert('G');
    s.insert('K');
    s.insert('H');
    s.insert('K');
    PrintSet(s);

    return 0;
}
