// Set_(4)_Lower_Bound.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Lower Bound (lower_bound(key))
    ------------------------------
    The set::lower_bound() is a built-in function in C++ STL which returns an iterator pointing to the element in the container which is equivalent to k passed in the parameter. 
    In case k is not present in the set container, the function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the 
    parameter exceeds the maximum value in the container, then the iterator returned points to the element beyond last element in the set container.

    Time Complexity of set::lower_bound() is O(logn), where n is the size of the set.
    Syntax:
        set_name.lower_bound(key)
    
    Parameters:     This function accepts a single mandatory parameter key which specifies the element whose lower_bound is to be returned.
    Return Value:   The function returns an iterator pointing to the element in the container which is equivalent to k passed in the parameter. In case k is not present in the set 
    container, the function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum value 
    in the container, then the iterator returned is equivalent to s.end() (A special iterator points beyond the last element).
    Below program illustrate the above function:

    (1) - find lower bound, when 2 is present in set
    (2) - find lower bound,when 3 is not present in set
    (1) - 
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
    set<int> s; // Empty set of integer.
    // Insert few elemets in set s.
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    PrintSet(s);

    // (1) - find lower bound, when 2 is present in set
    cout << endl;
    cout << "(1) : find lower bound, when 2 is present in set" << endl;
    
    set<int>::iterator it_2 = s.lower_bound(2);
    if (it_2 != s.end()) 
    {
        cout << "The lower bound of key 2 is = " << *it_2 << endl;
    }
    else
    {
        cout << "The element entered is larger than the greatest element in the set."<< endl;
    }


    // (2) - find lower bound, when 3 is not present in set - it will print immidiate next greater value.
    cout << endl;
    cout << "(2) : find lower bound,when 3 is not present in set" << endl;

    set<int>::iterator it_3 = s.lower_bound(3);
    if (it_3 != s.end())
    {
        cout << "The lower bound of key 2 is = " << *it_3 << endl;
    }
    else
    {
        cout << "The element entered is larger than the greatest element in the set." << endl;
    }

    // (3) - find lower bound, when 8 exceeds the max element in set
    cout << endl;
    cout << "(3) : find lower bound, when 8 exceeds the max element in set" << endl;
    
    set<int>::iterator it_8 = s.lower_bound(8);
    if (it_8 != s.end())
    {
        cout << "The lower bound of key 2 is = " << *it_8 << endl;
    }
    else
    {
        cout << "The element entered is larger than the greatest element in the set." << endl;
    }

    return 0;
}
