// List_(8)_erase_elelments_dividualby3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    (1) erase all element dividual by 3
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
    list<int> lst = { 9, 1, 1, 2, 4, 7, 9, 6, 6, 3 };
    cout << "Print list lst before erasing elements dividual by 3 ..." << endl;
    PrintList(lst);

    for (list<int>::iterator it = lst.begin(); it != lst.end();)
    {
        if (*it % 3 == 0)
        {
            it = lst.erase(it);
        }
        else
        {
            ++it;
        }
    }
    cout << "Print list lst after erasing elements dividual by 3 ..." << endl;
    PrintList(lst);

    return 0;
}
