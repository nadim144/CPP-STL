// Vector_(3).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Element access
    --------------
    (1) reference operator [i] – Returns a reference to the element at position ‘i’ in the vector
    (2) at(i) – Returns a reference to the element at position ‘i’ in the vector
    (3) front() – Returns first element of vector
    (4) back() – Returns last element of vector
    (5) data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/

#include <iostream>
#include <vector>
using namespace std;

std::vector<int> PrintVector(std::vector<int> v)
{
    cout<<"Size of Vector v = " << v.size()<<endl;
    cout << "Capacity of Vector v = " << v.capacity() << endl;;
    cout << "Vector Elements are : ";
    for (vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << (*itr) << " ";
    }
    cout << endl;
    return v;
}


bool FindElementsByIndex(std::vector<int> v, size_t Index, int& value)
{
    if (Index < v.size())
    {
        return(value = v[Index]);
        exit(0);
    }
    else
    {
        return false;
    }
}

bool FindElementsByat(std::vector<int> v, size_t Index, int& value)
{
    if (Index < v.size())
    {
        return(value = v.at(Index));
        exit(0);
    }
    else
    {
        return false;
    }
}

int main()
{
    std::vector<int> v; //Empty vector v with zero (0) size and capacity.
    v = { 33, 6, 14, 4, 3, 9, 8 }; 
    PrintVector(v);
    cout << endl; //==============================================================

    cout << "(1) Find Elements By Index []" << endl;
    int x = 0;
    if (FindElementsByIndex(v, 6, x))
    {
        cout << "Element found [6] = " << x << endl;
    }
    else
    {
        cout << "Element not found. Index out of bound ..." << endl;
    }
    cout << endl; //==============================================================

    cout << "(2) Find Elements By Index at()" << endl;
    if (FindElementsByat(v, 5, x))
    {
        cout << "Element found at(5) = " << x << endl;
    }
    else
    {
        cout << "Element not found. Index out of bound ..." << endl;
    }
    cout << endl; //==============================================================


    cout << "(3) v.front() - return first element of vector v."<<endl;
    int xfront = v.front();
    cout << "Front Element of Vector v = " << xfront << endl;
    cout << endl; //==============================================================

    cout << "(4) v.back() - return last element of vector v." << endl;
    int xback = v.back();
    cout << "Back Element of Vector v = " << xback << endl;
    cout << endl; //==============================================================

    cout << "(5) v.data() - return poiter to first element of vector v." << endl;
    int* ptr = v.data();
    cout << "Pointer to first element of Vector v = " << ptr << endl;
    for (int i = 0; i < v.size(); ++i, ++ptr)
    {
        cout << *ptr << " ";
    }
    cout << endl; //==============================================================

    return 0;
}
