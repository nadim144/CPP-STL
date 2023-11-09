// List_(2)_Capacity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Capacity
    --------
    (1) size() - returns the number of elements in the list.
    (2) max_size() - returns the maximum number of elements a list container can hold.
    (3) resize() - Used to resize a list container.
    (4) empty() - Returns whether the list is empty(1) or not(0).
*/

#include <iostream>
#include <list>
using namespace std;

void PrintList(list<int> l)
{
    cout << "size of list l = " << l.size() << endl;
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst = { 10, 8, 6, 18, 4, 16, 14, 12, 2, 4, 16, 14 };
    cout << endl;
    cout << "(1) size() - returns the number of elements in the list." << endl;
    cout << "size of list = " << lst.size() << endl;
    PrintList(lst);

    cout << endl;
    cout << "(2) max_size() - returns the maximum number of elements a list container can hold." << endl;
    cout << "How many elements List can contain = " << lst.max_size() << endl;

    cout << endl;
    cout << "(3) resize() - Used to resize a list container." << endl;
    lst.resize(20, 9);
    cout << "Print List after resize it to 20 :";
    PrintList(lst);

    cout << endl;
    cout << "Is list List is empty = " << lst.empty() << endl;
    return 0;
}
