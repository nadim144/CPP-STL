// List_(6)_Advance_Operation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    (1) list::clear() - clear() function is used to remove all the elements of the list container, thus making it size 0.
    (2) list::operator= - This operator is used to assign new contents to the container by replacing the existing contents.
    (3) list::swap() - This function is used to swap the contents of one list with another list of the same type and size.
    (4) list::splice() - Used to transfer elements from one list to another.
    (5) list::merge() - Merges two sorted lists into one.
*/

/*
    The list::splice() is a built-in function in C++ STL which is used to transfer elements from one list to another. The splice() function can be used in three ways: 
    (1) Transfer all the elements of list l1 into another list l2 at some position.
    (2) Transfer only the element pointed by i from list l1 into the another list l2 at some position.
    (3) Transfers the range [first, last) from list l1 into another list l2 at some position.

    Syntax
    -----
    l1.splice (iterator position, l2)
    l1.splice (iterator position, l2, iterator i)
    l1.splice (iterator position, l2, iterator first, iterator last)
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
    list<int>lst = { 9, 1, 1, 2, 7, 9, 6, 6, 3 };
    PrintList(lst);

    // (1)
    cout << endl;
    cout << "list::clear() : clear() function is used to remove all the elements of the list container, thus making it size 0." << endl;
    lst.clear();
    PrintList(lst);
    if (lst.empty())
    {
        cout << "TRUE : list lst become empty" << endl;
    }
    else
    {
        cout << "FALSE : List lst is not empty" << endl;
    }

    // (2)
    cout << endl;
    cout << "(2) list::operator= : This operator is used to assign new contents to the container by replacing the existing contents." << endl;
    lst = { 9, 1, 1, 2, 7, 9, 6, 6, 3 };
    list<int> lst2 = lst;
    PrintList(lst2);

    // (3)
    cout << endl;
    cout << "(3) list::swap() : This function is used to swap the contents of one list with another list of the same type and size." << endl;
    list<int> lst3 = { 9, 6, 8, 10, 21, 18, 15, 12, 27, 24 };
    lst2.swap(lst3);
    PrintList(lst2);
    PrintList(lst3);

    // (4)
    cout << endl;
    cout << "(4) list::splice() : Used to transfer elements from one list to another." << endl;
    lst.clear();
    list<int>lst1 = lst;
    lst1 = {1, 1, 2, 7, 9, 6, 6, 3 };
    PrintList(lst1);
    lst2 = { 9, 6, 8, 10, 21, 18, 15, 12 };
    PrintList(lst2);
    lst3 = { 4,5 };
    PrintList(lst3);

    lst1.splice(lst1.begin(), lst3);
    PrintList(lst1);

    // (5)
    cout << endl;
    cout << "(5) list::merge() : Merges two sorted lists into one." << endl;
    lst1.clear();
    lst1 = { 1,2,3,4 };
    PrintList(lst1);
    lst2.clear();
    lst2 = { 5,6,7,8 };
    PrintList(lst2);

    lst1.merge(lst2);
    PrintList(lst1);

    return 0;
}

/*
    output
    ------
    size of list lst = 9
    9 1 1 2 7 9 6 6 3
    
    list::clear() : clear() function is used to remove all the elements of the list container, thus making it size 0.
    size of list lst = 0
    
    TRUE : list lst become empty
    
    (2) list::operator= : This operator is used to assign new contents to the container by replacing the existing contents.
    size of list lst = 9
    9 1 1 2 7 9 6 6 3
    
    (3) list::swap() : This function is used to swap the contents of one list with another list of the same type and size.
    size of list lst = 10
    9 6 8 10 21 18 15 12 27 24
    size of list lst = 9
    9 1 1 2 7 9 6 6 3
    
    (4) list::splice() : Used to transfer elements from one list to another.
    size of list lst = 8
    1 1 2 7 9 6 6 3
    size of list lst = 8
    9 6 8 10 21 18 15 12
    size of list lst = 2
    4 5
    size of list lst = 10
    4 5 1 1 2 7 9 6 6 3
    
    (5) list::merge() : Merges two sorted lists into one.
    size of list lst = 4
    1 2 3 4
    size of list lst = 4
    5 6 7 8
    size of list lst = 8
    1 2 3 4 5 6 7 8
*/