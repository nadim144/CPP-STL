// List_(5)_PersystentTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Persystent Test
    ---------------
    Remove duplicates from array & return result in ascending order
    Input: {9, 1, 1, 2, 7, 9, 6, 6, 3}
    Output: {1, 2, 3, 6, 7, 9}
*/


#include <iostream>
#include <list>
using namespace std;

void PrintList(list<int>& lst)
{
    cout << "size of list lst = " << lst.size() << endl;
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst = { 9, 1, 1, 2, 7, 9, 6, 6, 3 };
    PrintList(lst);
    lst.sort();
    lst.unique();
    PrintList(lst);
    return 0;
}

/*
    output:
    ------
    size of list lst = 9
    9 1 1 2 7 9 6 6 3
    size of list lst = 6
    1 2 3 6 7 9
*/
